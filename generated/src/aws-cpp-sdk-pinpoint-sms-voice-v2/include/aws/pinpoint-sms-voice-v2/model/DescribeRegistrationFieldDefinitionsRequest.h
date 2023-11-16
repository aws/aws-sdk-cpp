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
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRegistrationFieldDefinitions"; }

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
    inline DescribeRegistrationFieldDefinitionsRequest& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>The path to the section of the registration.</p>
     */
    inline const Aws::String& GetSectionPath() const{ return m_sectionPath; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline bool SectionPathHasBeenSet() const { return m_sectionPathHasBeenSet; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetSectionPath(const Aws::String& value) { m_sectionPathHasBeenSet = true; m_sectionPath = value; }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetSectionPath(Aws::String&& value) { m_sectionPathHasBeenSet = true; m_sectionPath = std::move(value); }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline void SetSectionPath(const char* value) { m_sectionPathHasBeenSet = true; m_sectionPath.assign(value); }

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithSectionPath(const Aws::String& value) { SetSectionPath(value); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithSectionPath(Aws::String&& value) { SetSectionPath(std::move(value)); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithSectionPath(const char* value) { SetSectionPath(value); return *this;}


    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldPaths() const{ return m_fieldPaths; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline bool FieldPathsHasBeenSet() const { return m_fieldPathsHasBeenSet; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline void SetFieldPaths(const Aws::Vector<Aws::String>& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths = value; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline void SetFieldPaths(Aws::Vector<Aws::String>&& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths = std::move(value); }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithFieldPaths(const Aws::Vector<Aws::String>& value) { SetFieldPaths(value); return *this;}

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithFieldPaths(Aws::Vector<Aws::String>&& value) { SetFieldPaths(std::move(value)); return *this;}

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& AddFieldPaths(const Aws::String& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.push_back(value); return *this; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& AddFieldPaths(Aws::String&& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& AddFieldPaths(const char* value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.push_back(value); return *this; }


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
    inline DescribeRegistrationFieldDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeRegistrationFieldDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::String m_sectionPath;
    bool m_sectionPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_fieldPaths;
    bool m_fieldPathsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
