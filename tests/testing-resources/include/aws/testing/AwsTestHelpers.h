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

#define AWS_ASSERT_SUCCESS(awsCppSdkOutcome) \
  ASSERT_TRUE(awsCppSdkOutcome.IsSuccess()) << "Error details: " << awsCppSdkOutcome.GetError() \
                                            << "\nRetries: " << awsCppSdkOutcome.GetRetryCount() \
                                            << "\nNow timestamp: " << Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601_BASIC)

#define AWS_EXPECT_SUCCESS(awsCppSdkOutcome) \
  EXPECT_TRUE(awsCppSdkOutcome.IsSuccess()) << "Error details: " << awsCppSdkOutcome.GetError() \
                                            << "\nRetries: " << awsCppSdkOutcome.GetRetryCount() \
                                            << "\nNow timestamp: " << Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601_BASIC)

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


template<typename CONTEXT>
class RetryPlanner
{

    public:

        using RetryFunction_t = std::function<bool (std::shared_ptr<CONTEXT>, const Aws::String& id, int numRetriesLeft)>;

        struct FunctionBlock{
            Aws::String entryId;
            RetryFunction_t candidate;
            size_t retryCount;
            bool stopOnFail;
            explicit FunctionBlock(const Aws::String& _entryId, 
                           RetryFunction_t f, 
                           int _retryCount = 2, 
                           bool _stopOnFail = false):
                           entryId(_entryId), candidate(std::move(f)), retryCount(_retryCount+1), stopOnFail(_stopOnFail)
            {

            }
            ~FunctionBlock(){
                //std::cout<<"destructor for "<<entryId<<" called"<<std::endl;
            }
        };

        explicit RetryPlanner(std::shared_ptr<CONTEXT> context):_contextSp{context},_cursor{0}{ }
    
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
            AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "added function with id=" << item.entryId<<" num tries="<<item.retryCount<<" stop on fail="<<item.stopOnFail<<std::endl );
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
                    do{}
                    while( it->retryCount && !(localResult = it->candidate(_contextSp, it->entryId, --it->retryCount) ));
                    
                    //set global status from block evaluation
                    status = status && localResult;

                    //if stop on fail after retries, break and retry from start if available
                    if(it->stopOnFail && !localResult)
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
        std::shared_ptr<CONTEXT> _contextSp;
        Aws::UnorderedSet<Aws::String> _uniqueFunctionBlockSet;
        size_t _cursor;        

        static const char ALLOCATION_TAG[];

};

template <typename CONTEXT>
const char RetryPlanner<CONTEXT>::ALLOCATION_TAG[] = "RetryPlanner";