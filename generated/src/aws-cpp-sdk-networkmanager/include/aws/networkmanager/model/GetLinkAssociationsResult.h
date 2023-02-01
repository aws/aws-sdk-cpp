/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/LinkAssociation.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetLinkAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetLinkAssociationsResult();
    AWS_NETWORKMANAGER_API GetLinkAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetLinkAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The link associations.</p>
     */
    inline const Aws::Vector<LinkAssociation>& GetLinkAssociations() const{ return m_linkAssociations; }

    /**
     * <p>The link associations.</p>
     */
    inline void SetLinkAssociations(const Aws::Vector<LinkAssociation>& value) { m_linkAssociations = value; }

    /**
     * <p>The link associations.</p>
     */
    inline void SetLinkAssociations(Aws::Vector<LinkAssociation>&& value) { m_linkAssociations = std::move(value); }

    /**
     * <p>The link associations.</p>
     */
    inline GetLinkAssociationsResult& WithLinkAssociations(const Aws::Vector<LinkAssociation>& value) { SetLinkAssociations(value); return *this;}

    /**
     * <p>The link associations.</p>
     */
    inline GetLinkAssociationsResult& WithLinkAssociations(Aws::Vector<LinkAssociation>&& value) { SetLinkAssociations(std::move(value)); return *this;}

    /**
     * <p>The link associations.</p>
     */
    inline GetLinkAssociationsResult& AddLinkAssociations(const LinkAssociation& value) { m_linkAssociations.push_back(value); return *this; }

    /**
     * <p>The link associations.</p>
     */
    inline GetLinkAssociationsResult& AddLinkAssociations(LinkAssociation&& value) { m_linkAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetLinkAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetLinkAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetLinkAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LinkAssociation> m_linkAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
