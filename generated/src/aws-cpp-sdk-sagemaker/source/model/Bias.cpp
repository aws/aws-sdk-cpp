/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Bias.h>
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

Bias::Bias() : 
    m_reportHasBeenSet(false),
    m_preTrainingReportHasBeenSet(false),
    m_postTrainingReportHasBeenSet(false)
{
}

Bias::Bias(JsonView jsonValue) : 
    m_reportHasBeenSet(false),
    m_preTrainingReportHasBeenSet(false),
    m_postTrainingReportHasBeenSet(false)
{
  *this = jsonValue;
}

Bias& Bias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Report"))
  {
    m_report = jsonValue.GetObject("Report");

    m_reportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreTrainingReport"))
  {
    m_preTrainingReport = jsonValue.GetObject("PreTrainingReport");

    m_preTrainingReportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostTrainingReport"))
  {
    m_postTrainingReport = jsonValue.GetObject("PostTrainingReport");

    m_postTrainingReportHasBeenSet = true;
  }

  return *this;
}

JsonValue Bias::Jsonize() const
{
  JsonValue payload;

  if(m_reportHasBeenSet)
  {
   payload.WithObject("Report", m_report.Jsonize());

  }

  if(m_preTrainingReportHasBeenSet)
  {
   payload.WithObject("PreTrainingReport", m_preTrainingReport.Jsonize());

  }

  if(m_postTrainingReportHasBeenSet)
  {
   payload.WithObject("PostTrainingReport", m_postTrainingReport.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
