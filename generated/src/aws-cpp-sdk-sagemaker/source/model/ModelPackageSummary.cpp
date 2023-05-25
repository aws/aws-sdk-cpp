/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelPackageSummary::ModelPackageSummary() : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageVersion(0),
    m_modelPackageVersionHasBeenSet(false),
    m_modelPackageArnHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_modelPackageStatusHasBeenSet(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET),
    m_modelApprovalStatusHasBeenSet(false)
{
}

ModelPackageSummary::ModelPackageSummary(JsonView jsonValue) : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageVersion(0),
    m_modelPackageVersionHasBeenSet(false),
    m_modelPackageArnHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_modelPackageStatusHasBeenSet(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET),
    m_modelApprovalStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageSummary& ModelPackageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelPackageName"))
  {
    m_modelPackageName = jsonValue.GetString("ModelPackageName");

    m_modelPackageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroupName"))
  {
    m_modelPackageGroupName = jsonValue.GetString("ModelPackageGroupName");

    m_modelPackageGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageVersion"))
  {
    m_modelPackageVersion = jsonValue.GetInteger("ModelPackageVersion");

    m_modelPackageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageArn"))
  {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");

    m_modelPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageDescription"))
  {
    m_modelPackageDescription = jsonValue.GetString("ModelPackageDescription");

    m_modelPackageDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageStatus"))
  {
    m_modelPackageStatus = ModelPackageStatusMapper::GetModelPackageStatusForName(jsonValue.GetString("ModelPackageStatus"));

    m_modelPackageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelApprovalStatus"))
  {
    m_modelApprovalStatus = ModelApprovalStatusMapper::GetModelApprovalStatusForName(jsonValue.GetString("ModelApprovalStatus"));

    m_modelApprovalStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelPackageNameHasBeenSet)
  {
   payload.WithString("ModelPackageName", m_modelPackageName);

  }

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  if(m_modelPackageVersionHasBeenSet)
  {
   payload.WithInteger("ModelPackageVersion", m_modelPackageVersion);

  }

  if(m_modelPackageArnHasBeenSet)
  {
   payload.WithString("ModelPackageArn", m_modelPackageArn);

  }

  if(m_modelPackageDescriptionHasBeenSet)
  {
   payload.WithString("ModelPackageDescription", m_modelPackageDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_modelPackageStatusHasBeenSet)
  {
   payload.WithString("ModelPackageStatus", ModelPackageStatusMapper::GetNameForModelPackageStatus(m_modelPackageStatus));
  }

  if(m_modelApprovalStatusHasBeenSet)
  {
   payload.WithString("ModelApprovalStatus", ModelApprovalStatusMapper::GetNameForModelApprovalStatus(m_modelApprovalStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
