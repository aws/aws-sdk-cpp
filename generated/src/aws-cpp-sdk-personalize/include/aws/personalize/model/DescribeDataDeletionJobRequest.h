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
    AWS_PERSONALIZE_API DescribeDataDeletionJobRequest() = default;

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
    inline const Aws::String& GetDataDeletionJobArn() const { return m_dataDeletionJobArn; }
    inline bool DataDeletionJobArnHasBeenSet() const { return m_dataDeletionJobArnHasBeenSet; }
    template<typename DataDeletionJobArnT = Aws::String>
    void SetDataDeletionJobArn(DataDeletionJobArnT&& value) { m_dataDeletionJobArnHasBeenSet = true; m_dataDeletionJobArn = std::forward<DataDeletionJobArnT>(value); }
    template<typename DataDeletionJobArnT = Aws::String>
    DescribeDataDeletionJobRequest& WithDataDeletionJobArn(DataDeletionJobArnT&& value) { SetDataDeletionJobArn(std::forward<DataDeletionJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataDeletionJobArn;
    bool m_dataDeletionJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
