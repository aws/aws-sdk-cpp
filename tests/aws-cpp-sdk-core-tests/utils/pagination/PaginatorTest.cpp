/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/core/utils/StringUtils.h>
#include <vector>
#include <string>

using namespace Aws::Utils::Pagination;
using namespace Aws::Utils;

struct TestResult {
    Aws::Vector<Aws::String> items;
    Aws::String outputToken;
    bool moreResults;

    const Aws::Vector<Aws::String>& GetItems() const { return items; }
    const Aws::String& GetOutputToken() const { return outputToken; }
    bool GetMoreResults() const { return moreResults; }
};

struct TestOutcome {
    bool success;
    Aws::String error;
    TestResult result;

    bool IsSuccess() const { return success; }
    const Aws::String& GetError() const { return error; }
    const TestResult& GetResult() const { return result; }
};

struct TestRequest {
    Aws::String inputToken;
    int limitKey = 3;
    
    void SetInputToken(const Aws::String& t) { inputToken = t; }
    const Aws::String& GetInputToken() const { return inputToken; }
};

class PaginatorTestClient {
private:
    Aws::Vector<Aws::String> allData;
    bool shouldFail = false;
    
public:
    PaginatorTestClient() : allData({"apple", "banana", "cherry", "dragon-fruit", "elderberry", "fig", "grape"}) {}
    
    void SetData(const Aws::Vector<Aws::String>& data) { allData = data; }
    void SetShouldFail(bool fail) { shouldFail = fail; }
    void Reset() {
        allData = {"apple", "banana", "cherry", "dragon-fruit", "elderberry", "fig", "grape"};
        shouldFail = false;
    }
    
    TestOutcome ListItems(const TestRequest& request) {
        if (shouldFail) {
            return {false, "Request failed", {}};
        }
        
        int startIdx = 0;
        if (!request.GetInputToken().empty()) {
            startIdx = StringUtils::ConvertToInt32(request.GetInputToken().c_str());
        }
        
        TestResult result;
        for (size_t i = 0; i < static_cast<size_t>(request.limitKey) && startIdx + i < allData.size(); ++i) {
            result.items.push_back(allData[startIdx + i]);
        }
        
        int nextIdx = startIdx + request.limitKey;
        if (static_cast<size_t>(nextIdx) < allData.size()) {
            result.outputToken = StringUtils::to_string(nextIdx);
            result.moreResults = true;
        } else {
            result.moreResults = false;
        }
        
        return {true, "", result};
    }
};

struct ListItemsTraits {
    using OutcomeType = TestOutcome;
    using ResultType = TestResult;
    
    static OutcomeType Invoke(PaginatorTestClient& client, const TestRequest& request) {
        return client.ListItems(request);
    }
    
    static bool HasMoreResults(const TestResult& result) {
        return result.GetMoreResults();
    }
    
    static void SetNextRequest(const TestResult& result, TestRequest& request) {
        request.SetInputToken(result.GetOutputToken());
    }
};

class PaginatorTest : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    void SetUp() override
    {
        client.Reset();
    }
    
    void TearDown() override
    {
        client.Reset();
    }
    
    PaginatorTestClient client;
    TestRequest request;
};

TEST_F(PaginatorTest, TestIteratesThroughAllPages)
{
    PagePaginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    Aws::Vector<Aws::String> allItems;
    int pageCount = 0;
    
    for (const auto& outcome : paginator)
    {
        ASSERT_TRUE(outcome.IsSuccess());
        pageCount++;
        
        const auto& page = outcome.GetResult();
        for (const auto& item : page.GetItems())
        {
            allItems.push_back(item);
        }
    }
    
    EXPECT_EQ(pageCount, 3); // 7 items / 3 per page = 3 pages
    EXPECT_EQ(allItems.size(), 7u);
    EXPECT_STREQ(allItems[0].c_str(), "apple");
    EXPECT_STREQ(allItems[6].c_str(), "grape");
}

TEST_F(PaginatorTest, TestHandlesErrorGracefully)
{
    client.SetShouldFail(true);
    PagePaginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto it = paginator.begin();
    ASSERT_TRUE(it != paginator.end());
    
    const auto& outcome = *it;
    EXPECT_FALSE(outcome.IsSuccess());
    EXPECT_STREQ(outcome.GetError().c_str(), "Request failed");

    ++it;
    EXPECT_TRUE(it == paginator.end());
}

TEST_F(PaginatorTest, TestEmptyResultSet)
{
    client.SetData({});
    PagePaginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto it = paginator.begin();
    ASSERT_TRUE(it != paginator.end());
    
    const auto& outcome = *it;
    EXPECT_TRUE(outcome.IsSuccess());
    EXPECT_TRUE(outcome.GetResult().GetItems().empty());
    EXPECT_FALSE(outcome.GetResult().GetMoreResults());

    ++it;
    EXPECT_TRUE(it == paginator.end());
}

TEST_F(PaginatorTest, TestBeginEndIteratorComparison)
{
    PagePaginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto begin = paginator.begin();
    auto end = paginator.end();
    
    EXPECT_TRUE(begin != end);
    EXPECT_FALSE(begin == end);

    while (begin != end)
    {
        ++begin;
    }
    
    EXPECT_TRUE(begin == end);
    EXPECT_FALSE(begin != end);
}