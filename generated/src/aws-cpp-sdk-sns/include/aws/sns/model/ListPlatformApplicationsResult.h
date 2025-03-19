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
    AWS_SNS_API ListPlatformApplicationsResult() = default;
    AWS_SNS_API ListPlatformApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListPlatformApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Platform applications returned when calling
     * <code>ListPlatformApplications</code> action.</p>
     */
    inline const Aws::Vector<PlatformApplication>& GetPlatformApplications() const { return m_platformApplications; }
    template<typename PlatformApplicationsT = Aws::Vector<PlatformApplication>>
    void SetPlatformApplications(PlatformApplicationsT&& value) { m_platformApplicationsHasBeenSet = true; m_platformApplications = std::forward<PlatformApplicationsT>(value); }
    template<typename PlatformApplicationsT = Aws::Vector<PlatformApplication>>
    ListPlatformApplicationsResult& WithPlatformApplications(PlatformApplicationsT&& value) { SetPlatformApplications(std::forward<PlatformApplicationsT>(value)); return *this;}
    template<typename PlatformApplicationsT = PlatformApplication>
    ListPlatformApplicationsResult& AddPlatformApplications(PlatformApplicationsT&& value) { m_platformApplicationsHasBeenSet = true; m_platformApplications.emplace_back(std::forward<PlatformApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>NextToken</code> string is returned when calling
     * <code>ListPlatformApplications</code> action if additional records are available
     * after the first page results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPlatformApplicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListPlatformApplicationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlatformApplication> m_platformApplications;
    bool m_platformApplicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
