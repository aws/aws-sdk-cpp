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
  class UpdateDatasetResult
  {
  public:
    AWS_PERSONALIZE_API UpdateDatasetResult();
    AWS_PERSONALIZE_API UpdateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API UpdateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline UpdateDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline UpdateDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset you updated.</p>
     */
    inline UpdateDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_datasetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
