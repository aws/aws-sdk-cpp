/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/ExpirationTimeResponse.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   */
  class GetRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecord"; }

    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERFEATURESTORERUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group from which you
     * want to retrieve a record.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    GetRecordRequest& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that corresponds to <code>RecordIdentifier</code> type and uniquely
     * identifies the record in the <code>FeatureGroup</code>. </p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const { return m_recordIdentifierValueAsString; }
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }
    template<typename RecordIdentifierValueAsStringT = Aws::String>
    void SetRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::forward<RecordIdentifierValueAsStringT>(value); }
    template<typename RecordIdentifierValueAsStringT = Aws::String>
    GetRecordRequest& WithRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) { SetRecordIdentifierValueAsString(std::forward<RecordIdentifierValueAsStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatureNames() const { return m_featureNames; }
    inline bool FeatureNamesHasBeenSet() const { return m_featureNamesHasBeenSet; }
    template<typename FeatureNamesT = Aws::Vector<Aws::String>>
    void SetFeatureNames(FeatureNamesT&& value) { m_featureNamesHasBeenSet = true; m_featureNames = std::forward<FeatureNamesT>(value); }
    template<typename FeatureNamesT = Aws::Vector<Aws::String>>
    GetRecordRequest& WithFeatureNames(FeatureNamesT&& value) { SetFeatureNames(std::forward<FeatureNamesT>(value)); return *this;}
    template<typename FeatureNamesT = Aws::String>
    GetRecordRequest& AddFeatureNames(FeatureNamesT&& value) { m_featureNamesHasBeenSet = true; m_featureNames.emplace_back(std::forward<FeatureNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>GetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>GetRecord</code> will return null.</p>
     */
    inline ExpirationTimeResponse GetExpirationTimeResponse() const { return m_expirationTimeResponse; }
    inline bool ExpirationTimeResponseHasBeenSet() const { return m_expirationTimeResponseHasBeenSet; }
    inline void SetExpirationTimeResponse(ExpirationTimeResponse value) { m_expirationTimeResponseHasBeenSet = true; m_expirationTimeResponse = value; }
    inline GetRecordRequest& WithExpirationTimeResponse(ExpirationTimeResponse value) { SetExpirationTimeResponse(value); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_featureNames;
    bool m_featureNamesHasBeenSet = false;

    ExpirationTimeResponse m_expirationTimeResponse{ExpirationTimeResponse::NOT_SET};
    bool m_expirationTimeResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
