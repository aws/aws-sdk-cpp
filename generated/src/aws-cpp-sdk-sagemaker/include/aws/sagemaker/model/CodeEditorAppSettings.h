/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The Code Editor application settings.</p> <p>For more information about Code
   * Editor, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/code-editor.html">Get
   * started with Code Editor in Amazon SageMaker</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CodeEditorAppSettings">AWS
   * API Reference</a></p>
   */
  class CodeEditorAppSettings
  {
  public:
    AWS_SAGEMAKER_API CodeEditorAppSettings();
    AWS_SAGEMAKER_API CodeEditorAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CodeEditorAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    
    inline CodeEditorAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    
    inline CodeEditorAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const{ return m_lifecycleConfigArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline void SetLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline void SetLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline CodeEditorAppSettings& WithLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { SetLifecycleConfigArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline CodeEditorAppSettings& WithLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { SetLifecycleConfigArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline CodeEditorAppSettings& AddLifecycleConfigArns(const Aws::String& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline CodeEditorAppSettings& AddLifecycleConfigArns(Aws::String&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline CodeEditorAppSettings& AddLifecycleConfigArns(const char* value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
