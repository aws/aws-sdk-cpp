/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SageMakerImageName.h>
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
   * <p>The SageMaker images that are hidden from the Studio user interface. You must
   * specify the SageMaker image name and version aliases.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HiddenSageMakerImage">AWS
   * API Reference</a></p>
   */
  class HiddenSageMakerImage
  {
  public:
    AWS_SAGEMAKER_API HiddenSageMakerImage();
    AWS_SAGEMAKER_API HiddenSageMakerImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HiddenSageMakerImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The SageMaker image name that you are hiding from the Studio user interface.
     * </p>
     */
    inline const SageMakerImageName& GetSageMakerImageName() const{ return m_sageMakerImageName; }
    inline bool SageMakerImageNameHasBeenSet() const { return m_sageMakerImageNameHasBeenSet; }
    inline void SetSageMakerImageName(const SageMakerImageName& value) { m_sageMakerImageNameHasBeenSet = true; m_sageMakerImageName = value; }
    inline void SetSageMakerImageName(SageMakerImageName&& value) { m_sageMakerImageNameHasBeenSet = true; m_sageMakerImageName = std::move(value); }
    inline HiddenSageMakerImage& WithSageMakerImageName(const SageMakerImageName& value) { SetSageMakerImageName(value); return *this;}
    inline HiddenSageMakerImage& WithSageMakerImageName(SageMakerImageName&& value) { SetSageMakerImageName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version aliases you are hiding from the Studio user interface. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionAliases() const{ return m_versionAliases; }
    inline bool VersionAliasesHasBeenSet() const { return m_versionAliasesHasBeenSet; }
    inline void SetVersionAliases(const Aws::Vector<Aws::String>& value) { m_versionAliasesHasBeenSet = true; m_versionAliases = value; }
    inline void SetVersionAliases(Aws::Vector<Aws::String>&& value) { m_versionAliasesHasBeenSet = true; m_versionAliases = std::move(value); }
    inline HiddenSageMakerImage& WithVersionAliases(const Aws::Vector<Aws::String>& value) { SetVersionAliases(value); return *this;}
    inline HiddenSageMakerImage& WithVersionAliases(Aws::Vector<Aws::String>&& value) { SetVersionAliases(std::move(value)); return *this;}
    inline HiddenSageMakerImage& AddVersionAliases(const Aws::String& value) { m_versionAliasesHasBeenSet = true; m_versionAliases.push_back(value); return *this; }
    inline HiddenSageMakerImage& AddVersionAliases(Aws::String&& value) { m_versionAliasesHasBeenSet = true; m_versionAliases.push_back(std::move(value)); return *this; }
    inline HiddenSageMakerImage& AddVersionAliases(const char* value) { m_versionAliasesHasBeenSet = true; m_versionAliases.push_back(value); return *this; }
    ///@}
  private:

    SageMakerImageName m_sageMakerImageName;
    bool m_sageMakerImageNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionAliases;
    bool m_versionAliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
