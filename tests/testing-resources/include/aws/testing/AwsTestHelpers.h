/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <gtest/gtest.h>
#include <chrono>
#include <thread>

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/VersionConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <type_traits>
#include <ostream>



#define AWS_ASSERT_SUCCESS(awsCppSdkOutcome) \
  ASSERT_TRUE(awsCppSdkOutcome.IsSuccess()) << "Error details: " << awsCppSdkOutcome.GetError() \
                                            << "\nRetries: " << awsCppSdkOutcome.GetRetryCount() \
                                            << "\nNow timestamp: " << Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601_BASIC)

#define AWS_EXPECT_SUCCESS(awsCppSdkOutcome) \
  EXPECT_TRUE(awsCppSdkOutcome.IsSuccess()) << "Error details: " << awsCppSdkOutcome.GetError() \
                                            << "\nRetries: " << awsCppSdkOutcome.GetRetryCount() \
                                            << "\nNow timestamp: " << Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601_BASIC)


//#define AWS_GTEST_EQ(result, retries_left ...) (result) (result) && GTEST_MACRO(__VA_ARGS__)    


/**
 * AWS-CPP-SDK test utility helper function to un-conditionally retry not succeeded operation call.
 *   This is just to simplify testing, not to re-create and re-configure clients.
 *   Please use retry strategies in a real production code:
 *   https://docs.aws.amazon.com/sdkref/latest/guide/feature-retry-behavior.html
 * @tparam OutcomeT
 * @param funcToCall
 * @param retries
 * @param sleepBetween
 * @return OutcomeT
 */
template<typename OutcomeT>
OutcomeT CallOperationWithUnconditionalRetry(std::function<OutcomeT(void)> funcToCall,
                                             const size_t retries = 5,
                                             const std::chrono::seconds sleepBetween = std::chrono::seconds (1))
{
    OutcomeT outcome  = funcToCall();
    size_t attempt = 0;
    while(!outcome.IsSuccess() && attempt < retries)
    {
        outcome = funcToCall();
        attempt++;
        std::this_thread::sleep_for(sleepBetween);
    };
    return outcome;
}

template <typename ClientT, typename OutcomeT, typename RequestT>
OutcomeT CallOperationWithUnconditionalRetry(const ClientT* client,
                                             OutcomeT (ClientT::*OperationFunc)(const RequestT&) const,
                                             const RequestT& request,
                                             const size_t retries = 5,
                                             const std::chrono::seconds sleepBetween = std::chrono::seconds (1))
{
    if(!client)
    {
        return OutcomeT(Aws::Client::AWSError<Aws::Client::CoreErrors>(
                Aws::Client::CoreErrors::VALIDATION,
                "",
                "CallOperationWithUnconditionalRetry: client is a nullptr", false/*retryable*/));
    }

    std::function<OutcomeT(void)> func = std::bind(OperationFunc, client, request);
    return CallOperationWithUnconditionalRetry(func, retries, sleepBetween);
}



/*
    This is a simple templated class which executes test functional blocks in order with retries or stop on fail
*/



namespace{
    using EmptyClassType = std::nullptr_t;
}

enum StopStrategy{
        CONTINUE_AFTER_FAIL,
        STOP_ON_FIRST_FAIL,
        STOP_AFTER_ALL_RETRIES
};


template<typename CONTEXT = EmptyClassType>
class RetryPlanner 
{

    public:



        using CONTEXT_TYPE =  std::shared_ptr<CONTEXT>;


        //It can work with or without context        
        using RetryFunction_t = typename std::conditional< std::is_same<CONTEXT, EmptyClassType>::value , 
                                std::function<bool (const Aws::String& id, int numRetriesLeft)>,
                                std::function<bool (CONTEXT_TYPE, const Aws::String& id, int numRetriesLeft)>
                                >::type;

        using BlockIdentifierType = Aws::String;



        struct FunctionBlock{
            BlockIdentifierType entryId;
            RetryFunction_t candidate;
            size_t retryCount;
            StopStrategy stopStrategy;
            explicit FunctionBlock(const BlockIdentifierType& _entryId, 
                           RetryFunction_t f, 
                           size_t _retryCount = 2, 
                           StopStrategy _stopStrategy = StopStrategy::CONTINUE_AFTER_FAIL        //This ensures break circuit  after all retries and failures
                           ):
                           entryId{_entryId}, candidate{std::move(f)}, retryCount{_retryCount+1},stopStrategy{_stopStrategy}
            {

            }
            friend std::ostream& operator<<(std::ostream& os, FunctionBlock const & block) {
                return os << "EntryId=" <<block.entryId << " retryCount="<<block.retryCount<<" stopStrategy="<<block.stopStrategy<<std::endl;
            }
            ~FunctionBlock(){
                //std::cout<<"destructor for "<<entryId<<" called"<<std::endl;
            }
        };

        explicit RetryPlanner():_contextSp{nullptr},_cursor{0}{ }

        explicit RetryPlanner(CONTEXT_TYPE context):_contextSp{context},_cursor{0}{ }
    
        bool addFunction(const FunctionBlock& item)
        {
            bool status = false;
            if(item.candidate)
            {
                auto ret = _uniqueFunctionBlockSet.insert(item.entryId);

                if(ret.second)
                {
                    _suite.push_back(item);
                    status = true;
                }
            }
            AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "added function block=" << item );
            //std::cout<<"added function with id=" << item.entryId<<std::endl;
            return status;
        }

        /*
        this function executes the functional blocks in order according to user specification

        One can execute from the beginning with appropriate application setup in the context or just resume from after last block executed

        if retry is set for a block, then block will be retried for specified number of times on failure, whereas
        in case of successful execution, the block will not be tried again

        if stop on fail is set and a block fails even after retries, the execution of test suite ends there

        */
        bool execute(bool startFromBegin = false)
        {
            bool status = !_suite.empty();
            auto it = _suite.begin();
            
            if(!startFromBegin)
            {
                std::advance(it, _cursor) ;
            }
            else 
            {
                _cursor = 0;
            }

            for(; it != _suite.end();++it)
            {
                if(!it->candidate)
                {
                    //std::cout<<"invalid function with id=" << it->entryId<<std::endl;
                    return false;
                }

                {
                    //backup count
                    auto originalRetryCount = it->retryCount;
                    bool localResult = false;

                    //Try and retry a block
                    do{
                        AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "execute block="<<*it );
                        //std::cout<<"execute block="<<*it<<std::endl;
                    }
                    while( it->retryCount && 
                            !(localResult = invoker<CONTEXT>()(it->candidate, it->entryId, --it->retryCount)) &&
                            (it->stopStrategy != StopStrategy::STOP_ON_FIRST_FAIL) 
                         );
                    
                    //set global status from block evaluation
                    status = status && localResult;

                    //if stop on fail after retries, break and retry from start if available
                    if(( it->stopStrategy == StopStrategy::STOP_ON_FIRST_FAIL || it->stopStrategy == StopStrategy::STOP_AFTER_ALL_RETRIES ) && !localResult)
                    {
                        break;
                    } 
                    //restore state
                    it->retryCount = originalRetryCount;
                }  
                ++_cursor;            
            }

            AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "execute overall status="<<status );
            //std::cout<<"execute overall status="<<status<<std::endl;

            return status;
        }

        /*
        this function clears all the functional blocks added and resets the cursor
        */
        void clear()
        {
            _suite.clear();
            _cursor = 0;
        }
    private:
        using FunctionSuite = std::list<FunctionBlock>;
        FunctionSuite _suite;   
        CONTEXT_TYPE _contextSp;
        Aws::UnorderedSet<Aws::String> _uniqueFunctionBlockSet;
        size_t _cursor;        

        static const char ALLOCATION_TAG[];

        //compile time conditional invoking of callable function with different arguments depending upon available context or not in c++ 11
        
        using RetryFunctionWrapped = std::function<bool (const RetryFunction_t& callable, const BlockIdentifierType& , size_t) >;
        
        //the second template parameter is only defined for appropriate condition regarding context type is set or not is true
        //Per SFINAE, the case where the 2nd parameter condition is false won't lead to any substitution error but rather no definition
        //The second paramter defined is hidden using default value
        template <typename T, 
                typename std::enable_if<!std::is_same<T,EmptyClassType>::value, bool >::type = 0  > 
        RetryFunctionWrapped invoker() 
        { 

            return [this](const RetryFunction_t& callable, const BlockIdentifierType& id , size_t retriesLeft) {
                return callable( _contextSp, id, retriesLeft);
            };
        }

        template <typename T, 
                typename std::enable_if<std::is_same<T,EmptyClassType>::value, bool >::type  = 0> 
        RetryFunctionWrapped invoker() 
        { 
            return [](const RetryFunction_t& callable, const BlockIdentifierType& id , size_t retriesLeft) {
                return callable(id, retriesLeft);
            };
        }

};

template <typename CONTEXT>
const char RetryPlanner<CONTEXT>::ALLOCATION_TAG[] = "RetryPlanner";



//===============
// Macro to create a test fixture with retry logic
#define AWS_TEST_F(test_suite_name, test_name) AWS_TEST_F_N(test_suite_name, test_name, 1)
#define AWS_VALIDATE_INTEGER(value) static_assert(std::is_integral<decltype(value)>(), "Value must be an integer");

// Helpers
#define AWS_GTEST_STRINGIFY_HELPER_(name, ...) #name
#define AWS_GTEST_STRINGIFY_(...) GTEST_STRINGIFY_HELPER_(__VA_ARGS__, )

// Actual implementation
#define AWS_TEST_F_N(test_suite_name, test_name, MAX_RETRIES)     \
    static_assert(sizeof(AWS_GTEST_STRINGIFY_(test_suite_name)) > 1,                 \
                    "test_suite_name must not be empty");                        \
    static_assert(sizeof(AWS_GTEST_STRINGIFY_(test_name)) > 1,                       \
                    "test_name must not be empty");  \
    AWS_VALIDATE_INTEGER ((MAX_RETRIES)) \
    class GTEST_TEST_CLASS_NAME_(test_suite_name, test_name); \
    template<typename T> \
    class RetryWrapper##_test_suite_name_##test_name{}; \
    template<> \
    class RetryWrapper##_test_suite_name_##test_name<GTEST_TEST_CLASS_NAME_(test_suite_name,test_name)> : \
        public test_suite_name \
    { \
    protected: \
        int maxRetries{MAX_RETRIES}; \
        std::function<void(int)> delayFunction; \
        bool result{false}; \
    public: \
        virtual void Retry(bool&, int); \
        void SetDelayFunction(std::function<void(int)> f) { delayFunction = f; } \
        static ::testing::TestInfo* const test_info_; \
        template<typename T> \
        inline void AWS_EXPECT_EQ(const T& lhs, const T& rhs){ \
            if( ((result = result && (lhs == rhs)) || maxRetries == 0 ) ){ EXPECT_EQ(lhs,rhs); } \
        } \
        template<typename T> \
        inline void AWS_EXPECT_GT(const T& lhs, const T& rhs){ \
            if( ((result = result && (lhs == rhs)) || maxRetries == 0 ) ){ EXPECT_GT(lhs,rhs); } \
        } \
        template<typename T> \
        inline void AWS_EXPECT_LT(const T& lhs, const T& rhs){ \
            if( ((result = result && (lhs == rhs)) || maxRetries == 0 ) ){ EXPECT_LT(lhs,rhs); } \
        } \
        template<typename T> \
        inline void AWS_EXPECT_GE(const T& lhs, const T& rhs){ \
            if( ((result = result && (lhs == rhs)) || maxRetries == 0 ) ){ EXPECT_GE(lhs,rhs); } \
        } \
        template<typename T> \
        inline void AWS_EXPECT_LE(const T& lhs, const T& rhs){ \
            if( ((result = result && (lhs == rhs)) || maxRetries == 0 ) ){ EXPECT_LE(lhs,rhs); } \
        } \
        template<typename T> \
        inline void AWS_EXPECT_NE(const T& lhs, const T& rhs){ \
            if( ((result = result && (lhs == rhs)) || maxRetries == 0 ) ){ EXPECT_NE(lhs,rhs); } \
        } \
        inline void AWS_EXPECT_TRUE(bool condition){ \
            if( ((result = result && condition) || maxRetries == 0 ) ){ GTEST_EXPECT_TRUE(condition); } \
        } \
        inline void AWS_EXPECT_FALSE(bool condition){ \
            if( ((result = result && !condition)|| maxRetries == 0 ) ){ GTEST_EXPECT_FALSE(condition); } \
        } \
    }; \
    class GTEST_TEST_CLASS_NAME_(test_suite_name, test_name) : \
        public RetryWrapper##_test_suite_name_##test_name<GTEST_TEST_CLASS_NAME_(test_suite_name,test_name)> \
    {public: \
        void TestBody() override; \
    }; \
    ::testing::TestInfo* const RetryWrapper##_test_suite_name_##test_name<GTEST_TEST_CLASS_NAME_(test_suite_name,test_name)>::test_info_ = \
        ::testing::internal::MakeAndRegisterTestInfo( \
            #test_suite_name, #test_name, nullptr, nullptr, \
            ::testing::internal::CodeLocation(__FILE__, __LINE__), \
            ::testing::internal::GetTypeId<test_suite_name>(), \
            ::testing::internal::SuiteApiResolver<test_suite_name>::GetSetUpCaseOrSuite(__FILE__, __LINE__), \
            ::testing::internal::SuiteApiResolver<test_suite_name>::GetTearDownCaseOrSuite(__FILE__, __LINE__), \
            new ::testing::internal::TestFactoryImpl<GTEST_TEST_CLASS_NAME_(test_suite_name, test_name)> \
        ); \
    void GTEST_TEST_CLASS_NAME_(test_suite_name, test_name)::TestBody() \
    { \
        int attempt = 0; \
        result = false; \
        while (maxRetries-- && !result) \
        { \
            std::cout << "invoke retry of base. Attempt " << attempt << std::endl; \
            result = true; \
            RetryWrapper##_test_suite_name_##test_name<GTEST_TEST_CLASS_NAME_(test_suite_name,test_name)>::Retry(result, maxRetries); \
            std::cout << "result= " << result << std::endl; \
            if (delayFunction) \
            { \
                delayFunction(attempt++); \
            } \
        } \
        EXPECT_EQ(result, true);\
    } \
    void RetryWrapper##_test_suite_name_##test_name<GTEST_TEST_CLASS_NAME_(test_suite_name,test_name)>::Retry(__attribute__((unused)) bool& result, __attribute__((unused)) int attemptsLeft)
