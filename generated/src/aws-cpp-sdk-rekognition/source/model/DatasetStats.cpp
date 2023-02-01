/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DatasetStats::DatasetStats() : 
    m_labeledEntries(0),
    m_labeledEntriesHasBeenSet(false),
    m_totalEntries(0),
    m_totalEntriesHasBeenSet(false),
    m_totalLabels(0),
    m_totalLabelsHasBeenSet(false),
    m_errorEntries(0),
    m_errorEntriesHasBeenSet(false)
{
}

DatasetStats::DatasetStats(JsonView jsonValue) : 
    m_labeledEntries(0),
    m_labeledEntriesHasBeenSet(false),
    m_totalEntries(0),
    m_totalEntriesHasBeenSet(false),
    m_totalLabels(0),
    m_totalLabelsHasBeenSet(false),
    m_errorEntries(0),
    m_errorEntriesHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetStats& DatasetStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabeledEntries"))
  {
    m_labeledEntries = jsonValue.GetInteger("LabeledEntries");

    m_labeledEntriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalEntries"))
  {
    m_totalEntries = jsonValue.GetInteger("TotalEntries");

    m_totalEntriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalLabels"))
  {
    m_totalLabels = jsonValue.GetInteger("TotalLabels");

    m_totalLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorEntries"))
  {
    m_errorEntries = jsonValue.GetInteger("ErrorEntries");

    m_errorEntriesHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetStats::Jsonize() const
{
  JsonValue payload;

  if(m_labeledEntriesHasBeenSet)
  {
   payload.WithInteger("LabeledEntries", m_labeledEntries);

  }

  if(m_totalEntriesHasBeenSet)
  {
   payload.WithInteger("TotalEntries", m_totalEntries);

  }

  if(m_totalLabelsHasBeenSet)
  {
   payload.WithInteger("TotalLabels", m_totalLabels);

  }

  if(m_errorEntriesHasBeenSet)
  {
   payload.WithInteger("ErrorEntries", m_errorEntries);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
