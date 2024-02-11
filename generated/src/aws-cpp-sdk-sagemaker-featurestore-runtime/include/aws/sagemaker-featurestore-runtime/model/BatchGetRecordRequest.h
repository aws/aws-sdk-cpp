/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/ExpirationTimeResponse.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordIdentifier.h>
#include <utility>

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   */
  class BatchGetRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetRecord"; }

    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline const Aws::Vector<BatchGetRecordIdentifier>& GetIdentifiers() const{ return m_identifiers; }

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline void SetIdentifiers(const Aws::Vector<BatchGetRecordIdentifier>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline void SetIdentifiers(Aws::Vector<BatchGetRecordIdentifier>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline BatchGetRecordRequest& WithIdentifiers(const Aws::Vector<BatchGetRecordIdentifier>& value) { SetIdentifiers(value); return *this;}

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline BatchGetRecordRequest& WithIdentifiers(Aws::Vector<BatchGetRecordIdentifier>&& value) { SetIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline BatchGetRecordRequest& AddIdentifiers(const BatchGetRecordIdentifier& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }

    /**
     * <p>A list containing the name or Amazon Resource Name (ARN) of the
     * <code>FeatureGroup</code>, the list of names of <code>Feature</code>s to be
     * retrieved, and the corresponding <code>RecordIdentifier</code> values as
     * strings.</p>
     */
    inline BatchGetRecordRequest& AddIdentifiers(BatchGetRecordIdentifier&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>BatchGetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>BatchGetRecord</code> will return null.</p>
     */
    inline const ExpirationTimeResponse& GetExpirationTimeResponse() const{ return m_expirationTimeResponse; }

    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>BatchGetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>BatchGetRecord</code> will return null.</p>
     */
    inline bool ExpirationTimeResponseHasBeenSet() const { return m_expirationTimeResponseHasBeenSet; }

    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>BatchGetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>BatchGetRecord</code> will return null.</p>
     */
    inline void SetExpirationTimeResponse(const ExpirationTimeResponse& value) { m_expirationTimeResponseHasBeenSet = true; m_expirationTimeResponse = value; }

    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>BatchGetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>BatchGetRecord</code> will return null.</p>
     */
    inline void SetExpirationTimeResponse(ExpirationTimeResponse&& value) { m_expirationTimeResponseHasBeenSet = true; m_expirationTimeResponse = std::move(value); }

    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>BatchGetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>BatchGetRecord</code> will return null.</p>
     */
    inline BatchGetRecordRequest& WithExpirationTimeResponse(const ExpirationTimeResponse& value) { SetExpirationTimeResponse(value); return *this;}

    /**
     * <p>Parameter to request <code>ExpiresAt</code> in response. If
     * <code>Enabled</code>, <code>BatchGetRecord</code> will return the value of
     * <code>ExpiresAt</code>, if it is not null. If <code>Disabled</code> and null,
     * <code>BatchGetRecord</code> will return null.</p>
     */
    inline BatchGetRecordRequest& WithExpirationTimeResponse(ExpirationTimeResponse&& value) { SetExpirationTimeResponse(std::move(value)); return *this;}

  private:

    Aws::Vector<BatchGetRecordIdentifier> m_identifiers;
    bool m_identifiersHasBeenSet = false;

    ExpirationTimeResponse m_expirationTimeResponse;
    bool m_expirationTimeResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
