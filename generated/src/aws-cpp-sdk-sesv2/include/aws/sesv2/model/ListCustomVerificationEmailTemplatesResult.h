/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/CustomVerificationEmailTemplateMetadata.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListCustomVerificationEmailTemplatesResult
  {
  public:
    AWS_SESV2_API ListCustomVerificationEmailTemplatesResult() = default;
    AWS_SESV2_API ListCustomVerificationEmailTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListCustomVerificationEmailTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline const Aws::Vector<CustomVerificationEmailTemplateMetadata>& GetCustomVerificationEmailTemplates() const { return m_customVerificationEmailTemplates; }
    template<typename CustomVerificationEmailTemplatesT = Aws::Vector<CustomVerificationEmailTemplateMetadata>>
    void SetCustomVerificationEmailTemplates(CustomVerificationEmailTemplatesT&& value) { m_customVerificationEmailTemplatesHasBeenSet = true; m_customVerificationEmailTemplates = std::forward<CustomVerificationEmailTemplatesT>(value); }
    template<typename CustomVerificationEmailTemplatesT = Aws::Vector<CustomVerificationEmailTemplateMetadata>>
    ListCustomVerificationEmailTemplatesResult& WithCustomVerificationEmailTemplates(CustomVerificationEmailTemplatesT&& value) { SetCustomVerificationEmailTemplates(std::forward<CustomVerificationEmailTemplatesT>(value)); return *this;}
    template<typename CustomVerificationEmailTemplatesT = CustomVerificationEmailTemplateMetadata>
    ListCustomVerificationEmailTemplatesResult& AddCustomVerificationEmailTemplates(CustomVerificationEmailTemplatesT&& value) { m_customVerificationEmailTemplatesHasBeenSet = true; m_customVerificationEmailTemplates.emplace_back(std::forward<CustomVerificationEmailTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomVerificationEmailTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomVerificationEmailTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomVerificationEmailTemplateMetadata> m_customVerificationEmailTemplates;
    bool m_customVerificationEmailTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
