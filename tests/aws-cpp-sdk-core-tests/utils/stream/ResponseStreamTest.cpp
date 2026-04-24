/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using Aws::Utils::Stream::ResponseStream;
using Aws::StringStream;

static_assert(!std::is_copy_constructible<ResponseStream>::value, "This is a move only type.");
static_assert(std::is_move_constructible<ResponseStream>::value, "This is a move only type.");
static_assert(!std::is_assignable<ResponseStream, ResponseStream&>::value, "This is a move only type.");
static_assert(!std::is_assignable<ResponseStream, const ResponseStream&>::value, "This is a move only type.");
static_assert(std::is_assignable<ResponseStream, ResponseStream&&>::value, "This is a move only type.");
static_assert(std::is_default_constructible<ResponseStream>::value, "Must support default construction.");

class ResponseStreamTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ResponseStreamTest, TestResponseStreamBasic)
{
    ResponseStream defaultResponseStream;

    Aws::IOStream* pStream = Aws::Utils::Stream::DefaultResponseStreamFactoryMethod();
    ResponseStream defaultResponseStreamWithStream(pStream);
    EXPECT_EQ(&defaultResponseStreamWithStream.GetUnderlyingStream(), pStream);

    defaultResponseStream = std::move(defaultResponseStreamWithStream);
    EXPECT_EQ(&defaultResponseStream.GetUnderlyingStream(), pStream);

    ResponseStream moveCtorResponseStream(std::move(defaultResponseStream));
    EXPECT_EQ(&moveCtorResponseStream.GetUnderlyingStream(), pStream);
}

TEST_F(ResponseStreamTest, TestUnderlyingStreamGoneBeforeWrapper)
{
    Aws::IOStream* pStream = Aws::Utils::Stream::DefaultResponseStreamFactoryMethod();
    ResponseStream responseStream(pStream);
    Aws::Delete(pStream);
    // must not crash in ~ResponseStream
}

TEST_F(ResponseStreamTest, TestUnderlyingStreamOutlivesWrapper)
{
    Aws::IOStream* pStream = Aws::Utils::Stream::DefaultResponseStreamFactoryMethod();
    {
        ResponseStream responseStream(pStream);
    }
    // must not crash and must not memory leak, pStream is deleted by ~ResponseStream
}

