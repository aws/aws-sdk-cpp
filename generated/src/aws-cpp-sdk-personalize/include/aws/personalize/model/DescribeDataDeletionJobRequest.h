/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeDataDeletionJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeDataDeletionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataDeletionJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline const Aws::String& GetDataDeletionJobArn() const{ return m_dataDeletionJobArn; }
    inline bool DataDeletionJobArnHasBeenSet() const { return m_dataDeletionJobArnHasBeenSet; }
    inline void SetDataDeletionJobArn(const Aws::String& value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn = value; }
    inline void SetDataDeletionJobArn(Aws::String&& value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn = std::move(value); }
    inline void SetDataDeletionJobArn(const char* value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn.assign(value); }
    inline DescribeDataDeletionJobRequest& WithDataDeletionJobArn(const Aws::String& value) { SetDataDeletionJobArn(value); return *this;}
    inline DescribeDataDeletionJobRequest& WithDataDeletionJobArn(Aws::String&& value) { SetDataDeletionJobArn(std::move(value)); return *this;}
    inline DescribeDataDeletionJobRequest& WithDataDeletionJobArn(const char* value) { SetDataDeletionJobArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dataDeletionJobArn;
    bool m_dataDeletionJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
