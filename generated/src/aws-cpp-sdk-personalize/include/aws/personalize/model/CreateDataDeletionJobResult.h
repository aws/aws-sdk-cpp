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
  class CreateDataDeletionJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateDataDeletionJobResult();
    AWS_PERSONALIZE_API CreateDataDeletionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateDataDeletionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline const Aws::String& GetDataDeletionJobArn() const{ return m_dataDeletionJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline void SetDataDeletionJobArn(const Aws::String& value) { m_dataDeletionJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline void SetDataDeletionJobArn(Aws::String&& value) { m_dataDeletionJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline void SetDataDeletionJobArn(const char* value) { m_dataDeletionJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline CreateDataDeletionJobResult& WithDataDeletionJobArn(const Aws::String& value) { SetDataDeletionJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline CreateDataDeletionJobResult& WithDataDeletionJobArn(Aws::String&& value) { SetDataDeletionJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data deletion job.</p>
     */
    inline CreateDataDeletionJobResult& WithDataDeletionJobArn(const char* value) { SetDataDeletionJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDataDeletionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDataDeletionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDataDeletionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataDeletionJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
