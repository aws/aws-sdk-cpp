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
  class DescribeRegistrationFieldValuesRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRegistrationFieldValues"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}


    /**
     * <p>The version number of the registration.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the registration.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number of the registration.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number of the registration.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


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
    inline DescribeRegistrationFieldValuesRequest& WithSectionPath(const Aws::String& value) { SetSectionPath(value); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithSectionPath(Aws::String&& value) { SetSectionPath(std::move(value)); return *this;}

    /**
     * <p>The path to the section of the registration.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithSectionPath(const char* value) { SetSectionPath(value); return *this;}


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
    inline DescribeRegistrationFieldValuesRequest& WithFieldPaths(const Aws::Vector<Aws::String>& value) { SetFieldPaths(value); return *this;}

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithFieldPaths(Aws::Vector<Aws::String>&& value) { SetFieldPaths(std::move(value)); return *this;}

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& AddFieldPaths(const Aws::String& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.push_back(value); return *this; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& AddFieldPaths(Aws::String&& value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of paths to the registration form field.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& AddFieldPaths(const char* value) { m_fieldPathsHasBeenSet = true; m_fieldPaths.push_back(value); return *this; }


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
    inline DescribeRegistrationFieldValuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribeRegistrationFieldValuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeRegistrationFieldValuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

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
