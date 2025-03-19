/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribeRegistrationFieldDefinitionsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRegistrationFieldDefinitions"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const { return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    template<typename RegistrationTypeT = Aws::String>
    void SetRegistrationType(RegistrationTypeT&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::forward<RegistrationTypeT>(value); }
    template<typename RegistrationTypeT = Aws::String>
    DescribeRegistrationFieldDefinitionsRequest& WithRegistrationType(RegistrationTypeT&& value) { SetRegistrationType(std::forward<RegistrationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the section of the registration.</p>
     */
    inline const Aws::String& GetSectionPath() const { return m_sectionPath; }
    inline bool SectionPathHasBeenSet() const { return m_sectionPathHasBeenSet; }
    template<typename SectionPathT = Aws::String>
    void SetSectionPath(SectionPathT&& value) { m_sectionPathHasBeenSet = true; m_sectionPath = std::forward<SectionPathT>(value); }
    template<typename SectionPathT = Aws::String>
    DescribeRegistrationFieldDefinitionsRequest& WithSectionPath(SectionPathT&& value) { SetSectionPath(std::forward<SectionPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldPaths() const { return m_fieldPaths; }
    inline bool FieldPathsHasBeenSet() const { return m_fieldPathsHasBeenSet; }
    template<typename FieldPathsT = Aws::Vector<Aws::String>>
    void SetFieldPaths(FieldPathsT&& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths = std::forward<FieldPathsT>(value); }
    template<typename FieldPathsT = Aws::Vector<Aws::String>>
    DescribeRegistrationFieldDefinitionsRequest& WithFieldPaths(FieldPathsT&& value) { SetFieldPaths(std::forward<FieldPathsT>(value)); return *this;}
    template<typename FieldPathsT = Aws::String>
    DescribeRegistrationFieldDefinitionsRequest& AddFieldPaths(FieldPathsT&& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.emplace_back(std::forward<FieldPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRegistrationFieldDefinitionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeRegistrationFieldDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::String m_sectionPath;
    bool m_sectionPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_fieldPaths;
    bool m_fieldPathsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
