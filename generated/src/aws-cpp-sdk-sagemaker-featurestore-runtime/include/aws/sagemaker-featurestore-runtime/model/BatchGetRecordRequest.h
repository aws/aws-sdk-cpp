/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline const Aws::Vector<BatchGetRecordIdentifier>& GetIdentifiers() const{ return m_identifiers; }

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline void SetIdentifiers(const Aws::Vector<BatchGetRecordIdentifier>& value) { m_identifiersHasBeenSet = true; m_identifiers = value; }

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline void SetIdentifiers(Aws::Vector<BatchGetRecordIdentifier>&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::move(value); }

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline BatchGetRecordRequest& WithIdentifiers(const Aws::Vector<BatchGetRecordIdentifier>& value) { SetIdentifiers(value); return *this;}

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline BatchGetRecordRequest& WithIdentifiers(Aws::Vector<BatchGetRecordIdentifier>&& value) { SetIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline BatchGetRecordRequest& AddIdentifiers(const BatchGetRecordIdentifier& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(value); return *this; }

    /**
     * <p>A list of <code>FeatureGroup</code> names, with their corresponding
     * <code>RecordIdentifier</code> value, and Feature name that have been requested
     * to be retrieved in batch.</p>
     */
    inline BatchGetRecordRequest& AddIdentifiers(BatchGetRecordIdentifier&& value) { m_identifiersHasBeenSet = true; m_identifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetRecordIdentifier> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
