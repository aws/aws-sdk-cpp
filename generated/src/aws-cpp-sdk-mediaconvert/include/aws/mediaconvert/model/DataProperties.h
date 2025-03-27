/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Details about the media file's data track.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DataProperties">AWS
   * API Reference</a></p>
   */
  class DataProperties
  {
  public:
    AWS_MEDIACONVERT_API DataProperties() = default;
    AWS_MEDIACONVERT_API DataProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DataProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The language code of the data track, in three character ISO 639-3 format.
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    DataProperties& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
