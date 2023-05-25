/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/RecommenderSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

RecommenderSummary::RecommenderSummary() : 
    m_nameHasBeenSet(false),
    m_recommenderArnHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_recommenderConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

RecommenderSummary::RecommenderSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_recommenderArnHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_recipeArnHasBeenSet(false),
    m_recommenderConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RecommenderSummary& RecommenderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommenderArn"))
  {
    m_recommenderArn = jsonValue.GetString("recommenderArn");

    m_recommenderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("datasetGroupArn");

    m_datasetGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipeArn"))
  {
    m_recipeArn = jsonValue.GetString("recipeArn");

    m_recipeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommenderConfig"))
  {
    m_recommenderConfig = jsonValue.GetObject("recommenderConfig");

    m_recommenderConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommenderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recommenderArnHasBeenSet)
  {
   payload.WithString("recommenderArn", m_recommenderArn);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("recipeArn", m_recipeArn);

  }

  if(m_recommenderConfigHasBeenSet)
  {
   payload.WithObject("recommenderConfig", m_recommenderConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
