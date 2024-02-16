/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/PlatformApplication.h>
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
   * <p>Response for <code>ListPlatformApplications</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplicationsResponse">AWS
   * API Reference</a></p>
   */
  class ListPlatformApplicationsResult
  {
  public:
    AWS_SNS_API ListPlatformApplicationsResult();
    AWS_SNS_API ListPlatformApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListPlatformApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline const Aws::Vector<PlatformApplication>& GetPlatformApplications() const{ return m_platformApplications; }

    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline void SetPlatformApplications(const Aws::Vector<PlatformApplication>& value) { m_platformApplications = value; }

    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline void SetPlatformApplications(Aws::Vector<PlatformApplication>&& value) { m_platformApplications = std::move(value); }

    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline ListPlatformApplicationsResult& WithPlatformApplications(const Aws::Vector<PlatformApplication>& value) { SetPlatformApplications(value); return *this;}

    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline ListPlatformApplicationsResult& WithPlatformApplications(Aws::Vector<PlatformApplication>&& value) { SetPlatformApplications(std::move(value)); return *this;}

    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline ListPlatformApplicationsResult& AddPlatformApplications(const PlatformApplication& value) { m_platformApplications.push_back(value); return *this; }

    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline ListPlatformApplicationsResult& AddPlatformApplications(PlatformApplication&& value) { m_platformApplications.push_back(std::move(value)); return *this; }


    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline ListPlatformApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline ListPlatformApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline ListPlatformApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListPlatformApplicationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListPlatformApplicationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PlatformApplication> m_platformApplications;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
