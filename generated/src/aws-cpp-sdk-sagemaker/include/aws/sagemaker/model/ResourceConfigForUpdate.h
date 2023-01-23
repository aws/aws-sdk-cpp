/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>The <code>ResourceConfig</code> to update
   * <code>KeepAlivePeriodInSeconds</code>. Other fields in the
   * <code>ResourceConfig</code> cannot be updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceConfigForUpdate">AWS
   * API Reference</a></p>
   */
  class ResourceConfigForUpdate
  {
  public:
    AWS_SAGEMAKER_API ResourceConfigForUpdate();
    AWS_SAGEMAKER_API ResourceConfigForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceConfigForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>KeepAlivePeriodInSeconds</code> value specified in the
     * <code>ResourceConfig</code> to update.</p>
     */
    inline int GetKeepAlivePeriodInSeconds() const{ return m_keepAlivePeriodInSeconds; }

    /**
     * <p>The <code>KeepAlivePeriodInSeconds</code> value specified in the
     * <code>ResourceConfig</code> to update.</p>
     */
    inline bool KeepAlivePeriodInSecondsHasBeenSet() const { return m_keepAlivePeriodInSecondsHasBeenSet; }

    /**
     * <p>The <code>KeepAlivePeriodInSeconds</code> value specified in the
     * <code>ResourceConfig</code> to update.</p>
     */
    inline void SetKeepAlivePeriodInSeconds(int value) { m_keepAlivePeriodInSecondsHasBeenSet = true; m_keepAlivePeriodInSeconds = value; }

    /**
     * <p>The <code>KeepAlivePeriodInSeconds</code> value specified in the
     * <code>ResourceConfig</code> to update.</p>
     */
    inline ResourceConfigForUpdate& WithKeepAlivePeriodInSeconds(int value) { SetKeepAlivePeriodInSeconds(value); return *this;}

  private:

    int m_keepAlivePeriodInSeconds;
    bool m_keepAlivePeriodInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
