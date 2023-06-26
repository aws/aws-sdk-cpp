/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

WordCloudOptions::WordCloudOptions() : 
    m_wordOrientation(WordCloudWordOrientation::NOT_SET),
    m_wordOrientationHasBeenSet(false),
    m_wordScaling(WordCloudWordScaling::NOT_SET),
    m_wordScalingHasBeenSet(false),
    m_cloudLayout(WordCloudCloudLayout::NOT_SET),
    m_cloudLayoutHasBeenSet(false),
    m_wordCasing(WordCloudWordCasing::NOT_SET),
    m_wordCasingHasBeenSet(false),
    m_wordPadding(WordCloudWordPadding::NOT_SET),
    m_wordPaddingHasBeenSet(false),
    m_maximumStringLength(0),
    m_maximumStringLengthHasBeenSet(false)
{
}

WordCloudOptions::WordCloudOptions(JsonView jsonValue) : 
    m_wordOrientation(WordCloudWordOrientation::NOT_SET),
    m_wordOrientationHasBeenSet(false),
    m_wordScaling(WordCloudWordScaling::NOT_SET),
    m_wordScalingHasBeenSet(false),
    m_cloudLayout(WordCloudCloudLayout::NOT_SET),
    m_cloudLayoutHasBeenSet(false),
    m_wordCasing(WordCloudWordCasing::NOT_SET),
    m_wordCasingHasBeenSet(false),
    m_wordPadding(WordCloudWordPadding::NOT_SET),
    m_wordPaddingHasBeenSet(false),
    m_maximumStringLength(0),
    m_maximumStringLengthHasBeenSet(false)
{
  *this = jsonValue;
}

WordCloudOptions& WordCloudOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WordOrientation"))
  {
    m_wordOrientation = WordCloudWordOrientationMapper::GetWordCloudWordOrientationForName(jsonValue.GetString("WordOrientation"));

    m_wordOrientationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WordScaling"))
  {
    m_wordScaling = WordCloudWordScalingMapper::GetWordCloudWordScalingForName(jsonValue.GetString("WordScaling"));

    m_wordScalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudLayout"))
  {
    m_cloudLayout = WordCloudCloudLayoutMapper::GetWordCloudCloudLayoutForName(jsonValue.GetString("CloudLayout"));

    m_cloudLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WordCasing"))
  {
    m_wordCasing = WordCloudWordCasingMapper::GetWordCloudWordCasingForName(jsonValue.GetString("WordCasing"));

    m_wordCasingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WordPadding"))
  {
    m_wordPadding = WordCloudWordPaddingMapper::GetWordCloudWordPaddingForName(jsonValue.GetString("WordPadding"));

    m_wordPaddingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumStringLength"))
  {
    m_maximumStringLength = jsonValue.GetInteger("MaximumStringLength");

    m_maximumStringLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue WordCloudOptions::Jsonize() const
{
  JsonValue payload;

  if(m_wordOrientationHasBeenSet)
  {
   payload.WithString("WordOrientation", WordCloudWordOrientationMapper::GetNameForWordCloudWordOrientation(m_wordOrientation));
  }

  if(m_wordScalingHasBeenSet)
  {
   payload.WithString("WordScaling", WordCloudWordScalingMapper::GetNameForWordCloudWordScaling(m_wordScaling));
  }

  if(m_cloudLayoutHasBeenSet)
  {
   payload.WithString("CloudLayout", WordCloudCloudLayoutMapper::GetNameForWordCloudCloudLayout(m_cloudLayout));
  }

  if(m_wordCasingHasBeenSet)
  {
   payload.WithString("WordCasing", WordCloudWordCasingMapper::GetNameForWordCloudWordCasing(m_wordCasing));
  }

  if(m_wordPaddingHasBeenSet)
  {
   payload.WithString("WordPadding", WordCloudWordPaddingMapper::GetNameForWordCloudWordPadding(m_wordPadding));
  }

  if(m_maximumStringLengthHasBeenSet)
  {
   payload.WithInteger("MaximumStringLength", m_maximumStringLength);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
