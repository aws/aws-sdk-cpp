/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The specification of a Jupyter kernel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/KernelSpec">AWS
   * API Reference</a></p>
   */
  class KernelSpec
  {
  public:
    AWS_SAGEMAKER_API KernelSpec();
    AWS_SAGEMAKER_API KernelSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API KernelSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline KernelSpec& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline KernelSpec& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Jupyter kernel in the image. This value is case
     * sensitive.</p>
     */
    inline KernelSpec& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The display name of the kernel.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the kernel.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the kernel.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the kernel.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the kernel.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the kernel.</p>
     */
    inline KernelSpec& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the kernel.</p>
     */
    inline KernelSpec& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the kernel.</p>
     */
    inline KernelSpec& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
