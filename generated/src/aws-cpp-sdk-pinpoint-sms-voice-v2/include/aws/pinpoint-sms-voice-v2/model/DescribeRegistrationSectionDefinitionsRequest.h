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
  class DescribeRegistrationSectionDefinitionsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationSectionDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRegistrationSectionDefinitions"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const{ return m_registrationType; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const Aws::String& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(Aws::String&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const char* value) { m_registrationTypeHasBeenSet = true; m_registrationType.assign(value); }

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSectionPaths() const{ return m_sectionPaths; }

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline bool SectionPathsHasBeenSet() const { return m_sectionPathsHasBeenSet; }

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline void SetSectionPaths(const Aws::Vector<Aws::String>& value) { m_sectionPathsHasBeenSet = true; m_sectionPaths = value; }

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline void SetSectionPaths(Aws::Vector<Aws::String>&& value) { m_sectionPathsHasBeenSet = true; m_sectionPaths = std::move(value); }

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithSectionPaths(const Aws::Vector<Aws::String>& value) { SetSectionPaths(value); return *this;}

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithSectionPaths(Aws::Vector<Aws::String>&& value) { SetSectionPaths(std::move(value)); return *this;}

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& AddSectionPaths(const Aws::String& value) { m_sectionPathsHasBeenSet = true; m_sectionPaths.push_back(value); return *this; }

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& AddSectionPaths(Aws::String&& value) { m_sectionPathsHasBeenSet = true; m_sectionPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of paths for the registration form section.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& AddSectionPaths(const char* value) { m_sectionPathsHasBeenSet = true; m_sectionPaths.push_back(value); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline DescribeRegistrationSectionDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sectionPaths;
    bool m_sectionPathsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
