/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IngestionType.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateIngestionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateIngestionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIngestion"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the dataset used in the ingestion.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline CreateIngestionRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline CreateIngestionRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the ingestion.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }
    inline bool IngestionIdHasBeenSet() const { return m_ingestionIdHasBeenSet; }
    inline void SetIngestionId(const Aws::String& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = value; }
    inline void SetIngestionId(Aws::String&& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = std::move(value); }
    inline void SetIngestionId(const char* value) { m_ingestionIdHasBeenSet = true; m_ingestionId.assign(value); }
    inline CreateIngestionRequest& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}
    inline CreateIngestionRequest& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateIngestionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateIngestionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ingestion that you want to create.</p>
     */
    inline const IngestionType& GetIngestionType() const{ return m_ingestionType; }
    inline bool IngestionTypeHasBeenSet() const { return m_ingestionTypeHasBeenSet; }
    inline void SetIngestionType(const IngestionType& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = value; }
    inline void SetIngestionType(IngestionType&& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = std::move(value); }
    inline CreateIngestionRequest& WithIngestionType(const IngestionType& value) { SetIngestionType(value); return *this;}
    inline CreateIngestionRequest& WithIngestionType(IngestionType&& value) { SetIngestionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_ingestionId;
    bool m_ingestionIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    IngestionType m_ingestionType;
    bool m_ingestionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
