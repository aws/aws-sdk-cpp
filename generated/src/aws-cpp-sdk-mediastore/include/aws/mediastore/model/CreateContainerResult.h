﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/Container.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaStore
{
namespace Model
{
  class CreateContainerResult
  {
  public:
    AWS_MEDIASTORE_API CreateContainerResult();
    AWS_MEDIASTORE_API CreateContainerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API CreateContainerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ContainerARN: The Amazon Resource Name (ARN) of the newly created container.
     * The ARN has the following format: arn:aws:&lt;region&gt;:&lt;account that owns
     * this container&gt;:container/&lt;name of container&gt;. For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     * <p>ContainerName: The container name as specified in the request.</p>
     * <p>CreationTime: Unix time stamp.</p> <p>Status: The status of container
     * creation or deletion. The status is one of the following: <code>CREATING</code>,
     * <code>ACTIVE</code>, or <code>DELETING</code>. While the service is creating the
     * container, the status is <code>CREATING</code>. When an endpoint is available,
     * the status changes to <code>ACTIVE</code>.</p> <p>The return value does not
     * include the container's endpoint. To make downstream requests, you must obtain
     * this value by using <a>DescribeContainer</a> or <a>ListContainers</a>.</p>
     */
    inline const Container& GetContainer() const{ return m_container; }
    inline void SetContainer(const Container& value) { m_container = value; }
    inline void SetContainer(Container&& value) { m_container = std::move(value); }
    inline CreateContainerResult& WithContainer(const Container& value) { SetContainer(value); return *this;}
    inline CreateContainerResult& WithContainer(Container&& value) { SetContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContainerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContainerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContainerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Container m_container;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
