/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for <code>ListEndpointsByPlatformApplication</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplicationResponse">AWS
   * API Reference</a></p>
   */
  class ListEndpointsByPlatformApplicationResult
  {
  public:
    AWS_SNS_API ListEndpointsByPlatformApplicationResult();
    AWS_SNS_API ListEndpointsByPlatformApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListEndpointsByPlatformApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpoints = value; }

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& AddEndpoints(const Aws::String& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& AddEndpoints(Aws::String&& value) { m_endpoints.push_back(std::move(value)); return *this; }

    /**
     * <p>Endpoints returned for <code>ListEndpointsByPlatformApplication</code>
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& AddEndpoints(const char* value) { m_endpoints.push_back(value); return *this; }


    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListEndpointsByPlatformApplication</code> action if additional records are
     * available after the first page results.</p>
     */
    inline ListEndpointsByPlatformApplicationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListEndpointsByPlatformApplicationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListEndpointsByPlatformApplicationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_endpoints;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
