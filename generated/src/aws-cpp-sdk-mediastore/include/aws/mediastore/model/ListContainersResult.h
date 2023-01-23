/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/Container.h>
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
  class ListContainersResult
  {
  public:
    AWS_MEDIASTORE_API ListContainersResult();
    AWS_MEDIASTORE_API ListContainersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API ListContainersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of the containers.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>The names of the containers.</p>
     */
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containers = value; }

    /**
     * <p>The names of the containers.</p>
     */
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containers = std::move(value); }

    /**
     * <p>The names of the containers.</p>
     */
    inline ListContainersResult& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>The names of the containers.</p>
     */
    inline ListContainersResult& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The names of the containers.</p>
     */
    inline ListContainersResult& AddContainers(const Container& value) { m_containers.push_back(value); return *this; }

    /**
     * <p>The names of the containers.</p>
     */
    inline ListContainersResult& AddContainers(Container&& value) { m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline ListContainersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline ListContainersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline ListContainersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Container> m_containers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
