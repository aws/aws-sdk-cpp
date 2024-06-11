﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specify the details for each pair of HLS and DASH additional manifests that you
   * want the service to generate for this CMAF output group. Each pair of manifests
   * can reference a different subset of outputs in the group.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafAdditionalManifest">AWS
   * API Reference</a></p>
   */
  class CmafAdditionalManifest
  {
  public:
    AWS_MEDIACONVERT_API CmafAdditionalManifest();
    AWS_MEDIACONVERT_API CmafAdditionalManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmafAdditionalManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your HLS group is
     * film-name.m3u8. If you enter "-no-premium" for this setting, then the file name
     * the service generates for this top-level manifest is film-name-no-premium.m3u8.
     * For HLS output groups, specify a manifestNameModifier that is different from the
     * nameModifier of the output. The service uses the output name modifier to create
     * unique names for the individual variant manifests.
     */
    inline const Aws::String& GetManifestNameModifier() const{ return m_manifestNameModifier; }
    inline bool ManifestNameModifierHasBeenSet() const { return m_manifestNameModifierHasBeenSet; }
    inline void SetManifestNameModifier(const Aws::String& value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier = value; }
    inline void SetManifestNameModifier(Aws::String&& value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier = std::move(value); }
    inline void SetManifestNameModifier(const char* value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier.assign(value); }
    inline CmafAdditionalManifest& WithManifestNameModifier(const Aws::String& value) { SetManifestNameModifier(value); return *this;}
    inline CmafAdditionalManifest& WithManifestNameModifier(Aws::String&& value) { SetManifestNameModifier(std::move(value)); return *this;}
    inline CmafAdditionalManifest& WithManifestNameModifier(const char* value) { SetManifestNameModifier(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline const Aws::Vector<Aws::String>& GetSelectedOutputs() const{ return m_selectedOutputs; }
    inline bool SelectedOutputsHasBeenSet() const { return m_selectedOutputsHasBeenSet; }
    inline void SetSelectedOutputs(const Aws::Vector<Aws::String>& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs = value; }
    inline void SetSelectedOutputs(Aws::Vector<Aws::String>&& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs = std::move(value); }
    inline CmafAdditionalManifest& WithSelectedOutputs(const Aws::Vector<Aws::String>& value) { SetSelectedOutputs(value); return *this;}
    inline CmafAdditionalManifest& WithSelectedOutputs(Aws::Vector<Aws::String>&& value) { SetSelectedOutputs(std::move(value)); return *this;}
    inline CmafAdditionalManifest& AddSelectedOutputs(const Aws::String& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.push_back(value); return *this; }
    inline CmafAdditionalManifest& AddSelectedOutputs(Aws::String&& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.push_back(std::move(value)); return *this; }
    inline CmafAdditionalManifest& AddSelectedOutputs(const char* value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_manifestNameModifier;
    bool m_manifestNameModifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedOutputs;
    bool m_selectedOutputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
