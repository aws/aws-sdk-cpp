/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociation.h>
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
namespace RAM
{
namespace Model
{
  class GetResourceShareAssociationsResult
  {
  public:
    AWS_RAM_API GetResourceShareAssociationsResult();
    AWS_RAM_API GetResourceShareAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API GetResourceShareAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline const Aws::Vector<ResourceShareAssociation>& GetResourceShareAssociations() const{ return m_resourceShareAssociations; }

    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline void SetResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { m_resourceShareAssociations = value; }

    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline void SetResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { m_resourceShareAssociations = std::move(value); }

    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline GetResourceShareAssociationsResult& WithResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { SetResourceShareAssociations(value); return *this;}

    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline GetResourceShareAssociationsResult& WithResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { SetResourceShareAssociations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline GetResourceShareAssociationsResult& AddResourceShareAssociations(const ResourceShareAssociation& value) { m_resourceShareAssociations.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline GetResourceShareAssociationsResult& AddResourceShareAssociations(ResourceShareAssociation&& value) { m_resourceShareAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline GetResourceShareAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline GetResourceShareAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline GetResourceShareAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceShareAssociation> m_resourceShareAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
