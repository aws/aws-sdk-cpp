/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon SageMaker Canvas application setting where you configure document
   * querying.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/KendraSettings">AWS
   * API Reference</a></p>
   */
  class KendraSettings
  {
  public:
    AWS_SAGEMAKER_API KendraSettings();
    AWS_SAGEMAKER_API KendraSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API KendraSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the document querying feature is enabled or disabled in the
     * Canvas application.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether the document querying feature is enabled or disabled in the
     * Canvas application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether the document querying feature is enabled or disabled in the
     * Canvas application.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether the document querying feature is enabled or disabled in the
     * Canvas application.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether the document querying feature is enabled or disabled in the
     * Canvas application.</p>
     */
    inline KendraSettings& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether the document querying feature is enabled or disabled in the
     * Canvas application.</p>
     */
    inline KendraSettings& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
