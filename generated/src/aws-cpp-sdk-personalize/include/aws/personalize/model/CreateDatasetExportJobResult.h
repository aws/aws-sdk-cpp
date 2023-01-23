/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{
  class CreateDatasetExportJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetExportJobResult();
    AWS_PERSONALIZE_API CreateDatasetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateDatasetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline const Aws::String& GetDatasetExportJobArn() const{ return m_datasetExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline void SetDatasetExportJobArn(const Aws::String& value) { m_datasetExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline void SetDatasetExportJobArn(Aws::String&& value) { m_datasetExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline void SetDatasetExportJobArn(const char* value) { m_datasetExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline CreateDatasetExportJobResult& WithDatasetExportJobArn(const Aws::String& value) { SetDatasetExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline CreateDatasetExportJobResult& WithDatasetExportJobArn(Aws::String&& value) { SetDatasetExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job.</p>
     */
    inline CreateDatasetExportJobResult& WithDatasetExportJobArn(const char* value) { SetDatasetExportJobArn(value); return *this;}

  private:

    Aws::String m_datasetExportJobArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
