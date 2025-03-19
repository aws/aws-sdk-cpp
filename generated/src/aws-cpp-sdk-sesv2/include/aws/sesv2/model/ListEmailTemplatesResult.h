/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/EmailTemplateMetadata.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following elements are returned by the service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListEmailTemplatesResult
  {
  public:
    AWS_SESV2_API ListEmailTemplatesResult() = default;
    AWS_SESV2_API ListEmailTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListEmailTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline const Aws::Vector<EmailTemplateMetadata>& GetTemplatesMetadata() const { return m_templatesMetadata; }
    template<typename TemplatesMetadataT = Aws::Vector<EmailTemplateMetadata>>
    void SetTemplatesMetadata(TemplatesMetadataT&& value) { m_templatesMetadataHasBeenSet = true; m_templatesMetadata = std::forward<TemplatesMetadataT>(value); }
    template<typename TemplatesMetadataT = Aws::Vector<EmailTemplateMetadata>>
    ListEmailTemplatesResult& WithTemplatesMetadata(TemplatesMetadataT&& value) { SetTemplatesMetadata(std::forward<TemplatesMetadataT>(value)); return *this;}
    template<typename TemplatesMetadataT = EmailTemplateMetadata>
    ListEmailTemplatesResult& AddTemplatesMetadata(TemplatesMetadataT&& value) { m_templatesMetadataHasBeenSet = true; m_templatesMetadata.emplace_back(std::forward<TemplatesMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent <code>ListEmailTemplates</code> call to
     * retrieve the next 10 email templates.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEmailTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEmailTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EmailTemplateMetadata> m_templatesMetadata;
    bool m_templatesMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
