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
    AWS_TRANSCRIBESERVICE_API ToxicityDetectionSettings();
    AWS_TRANSCRIBESERVICE_API ToxicityDetectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API ToxicityDetectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline const Aws::Vector<ToxicityCategory>& GetToxicityCategories() const{ return m_toxicityCategories; }

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline bool ToxicityCategoriesHasBeenSet() const { return m_toxicityCategoriesHasBeenSet; }

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline void SetToxicityCategories(const Aws::Vector<ToxicityCategory>& value) { m_toxicityCategoriesHasBeenSet = true; m_toxicityCategories = value; }

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline void SetToxicityCategories(Aws::Vector<ToxicityCategory>&& value) { m_toxicityCategoriesHasBeenSet = true; m_toxicityCategories = std::move(value); }

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline ToxicityDetectionSettings& WithToxicityCategories(const Aws::Vector<ToxicityCategory>& value) { SetToxicityCategories(value); return *this;}

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline ToxicityDetectionSettings& WithToxicityCategories(Aws::Vector<ToxicityCategory>&& value) { SetToxicityCategories(std::move(value)); return *this;}

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline ToxicityDetectionSettings& AddToxicityCategories(const ToxicityCategory& value) { m_toxicityCategoriesHasBeenSet = true; m_toxicityCategories.push_back(value); return *this; }

    /**
     * <p> If you include <code>ToxicityDetection</code> in your transcription request,
     * you must also include <code>ToxicityCategories</code>. The only accepted value
     * for this parameter is <code>ALL</code>.</p>
     */
    inline ToxicityDetectionSettings& AddToxicityCategories(ToxicityCategory&& value) { m_toxicityCategoriesHasBeenSet = true; m_toxicityCategories.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ToxicityCategory> m_toxicityCategories;
    bool m_toxicityCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
