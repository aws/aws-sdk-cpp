/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/ParallelDataProperties.h>
#include <aws/translate/model/ParallelDataDataLocation.h>
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
namespace Translate
{
namespace Model
{
  class GetParallelDataResult
  {
  public:
    AWS_TRANSLATE_API GetParallelDataResult();
    AWS_TRANSLATE_API GetParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API GetParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline const ParallelDataProperties& GetParallelDataProperties() const{ return m_parallelDataProperties; }
    inline void SetParallelDataProperties(const ParallelDataProperties& value) { m_parallelDataProperties = value; }
    inline void SetParallelDataProperties(ParallelDataProperties&& value) { m_parallelDataProperties = std::move(value); }
    inline GetParallelDataResult& WithParallelDataProperties(const ParallelDataProperties& value) { SetParallelDataProperties(value); return *this;}
    inline GetParallelDataResult& WithParallelDataProperties(ParallelDataProperties&& value) { SetParallelDataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the most recent parallel data input file that was
     * successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline const ParallelDataDataLocation& GetDataLocation() const{ return m_dataLocation; }
    inline void SetDataLocation(const ParallelDataDataLocation& value) { m_dataLocation = value; }
    inline void SetDataLocation(ParallelDataDataLocation&& value) { m_dataLocation = std::move(value); }
    inline GetParallelDataResult& WithDataLocation(const ParallelDataDataLocation& value) { SetDataLocation(value); return *this;}
    inline GetParallelDataResult& WithDataLocation(ParallelDataDataLocation&& value) { SetDataLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetAuxiliaryDataLocation() const{ return m_auxiliaryDataLocation; }
    inline void SetAuxiliaryDataLocation(const ParallelDataDataLocation& value) { m_auxiliaryDataLocation = value; }
    inline void SetAuxiliaryDataLocation(ParallelDataDataLocation&& value) { m_auxiliaryDataLocation = std::move(value); }
    inline GetParallelDataResult& WithAuxiliaryDataLocation(const ParallelDataDataLocation& value) { SetAuxiliaryDataLocation(value); return *this;}
    inline GetParallelDataResult& WithAuxiliaryDataLocation(ParallelDataDataLocation&& value) { SetAuxiliaryDataLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetLatestUpdateAttemptAuxiliaryDataLocation() const{ return m_latestUpdateAttemptAuxiliaryDataLocation; }
    inline void SetLatestUpdateAttemptAuxiliaryDataLocation(const ParallelDataDataLocation& value) { m_latestUpdateAttemptAuxiliaryDataLocation = value; }
    inline void SetLatestUpdateAttemptAuxiliaryDataLocation(ParallelDataDataLocation&& value) { m_latestUpdateAttemptAuxiliaryDataLocation = std::move(value); }
    inline GetParallelDataResult& WithLatestUpdateAttemptAuxiliaryDataLocation(const ParallelDataDataLocation& value) { SetLatestUpdateAttemptAuxiliaryDataLocation(value); return *this;}
    inline GetParallelDataResult& WithLatestUpdateAttemptAuxiliaryDataLocation(ParallelDataDataLocation&& value) { SetLatestUpdateAttemptAuxiliaryDataLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetParallelDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetParallelDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetParallelDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ParallelDataProperties m_parallelDataProperties;

    ParallelDataDataLocation m_dataLocation;

    ParallelDataDataLocation m_auxiliaryDataLocation;

    ParallelDataDataLocation m_latestUpdateAttemptAuxiliaryDataLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
