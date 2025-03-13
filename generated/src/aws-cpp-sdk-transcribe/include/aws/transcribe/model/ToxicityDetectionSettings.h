/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/ToxicityCategory.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Contains <code>ToxicityCategories</code>, which is a required parameter if
   * you want to enable toxicity detection (<code>ToxicityDetection</code>) in your
   * transcription request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ToxicityDetectionSettings">AWS
   * API Reference</a></p>
   */
  class ToxicityDetectionSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API ToxicityDetectionSettings() = default;
    AWS_TRANSCRIBESERVICE_API ToxicityDetectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API ToxicityDetectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline const Aws::Vector<ToxicityCategory>& GetToxicityCategories() const { return m_toxicityCategories; }
    inline bool ToxicityCategoriesHasBeenSet() const { return m_toxicityCategoriesHasBeenSet; }
    template<typename ToxicityCategoriesT = Aws::Vector<ToxicityCategory>>
    void SetToxicityCategories(ToxicityCategoriesT&& value) { m_toxicityCategoriesHasBeenSet = true; m_toxicityCategories = std::forward<ToxicityCategoriesT>(value); }
    template<typename ToxicityCategoriesT = Aws::Vector<ToxicityCategory>>
    ToxicityDetectionSettings& WithToxicityCategories(ToxicityCategoriesT&& value) { SetToxicityCategories(std::forward<ToxicityCategoriesT>(value)); return *this;}
    inline ToxicityDetectionSettings& AddToxicityCategories(ToxicityCategory value) { m_toxicityCategoriesHasBeenSet = true; m_toxicityCategories.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<ToxicityCategory> m_toxicityCategories;
    bool m_toxicityCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
