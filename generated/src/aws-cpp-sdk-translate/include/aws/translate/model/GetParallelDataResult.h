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
    AWS_TRANSLATE_API GetParallelDataResult() = default;
    AWS_TRANSLATE_API GetParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API GetParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline const ParallelDataProperties& GetParallelDataProperties() const { return m_parallelDataProperties; }
    template<typename ParallelDataPropertiesT = ParallelDataProperties>
    void SetParallelDataProperties(ParallelDataPropertiesT&& value) { m_parallelDataPropertiesHasBeenSet = true; m_parallelDataProperties = std::forward<ParallelDataPropertiesT>(value); }
    template<typename ParallelDataPropertiesT = ParallelDataProperties>
    GetParallelDataResult& WithParallelDataProperties(ParallelDataPropertiesT&& value) { SetParallelDataProperties(std::forward<ParallelDataPropertiesT>(value)); return *this;}
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
    inline const ParallelDataDataLocation& GetDataLocation() const { return m_dataLocation; }
    template<typename DataLocationT = ParallelDataDataLocation>
    void SetDataLocation(DataLocationT&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::forward<DataLocationT>(value); }
    template<typename DataLocationT = ParallelDataDataLocation>
    GetParallelDataResult& WithDataLocation(DataLocationT&& value) { SetDataLocation(std::forward<DataLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetAuxiliaryDataLocation() const { return m_auxiliaryDataLocation; }
    template<typename AuxiliaryDataLocationT = ParallelDataDataLocation>
    void SetAuxiliaryDataLocation(AuxiliaryDataLocationT&& value) { m_auxiliaryDataLocationHasBeenSet = true; m_auxiliaryDataLocation = std::forward<AuxiliaryDataLocationT>(value); }
    template<typename AuxiliaryDataLocationT = ParallelDataDataLocation>
    GetParallelDataResult& WithAuxiliaryDataLocation(AuxiliaryDataLocationT&& value) { SetAuxiliaryDataLocation(std::forward<AuxiliaryDataLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetLatestUpdateAttemptAuxiliaryDataLocation() const { return m_latestUpdateAttemptAuxiliaryDataLocation; }
    template<typename LatestUpdateAttemptAuxiliaryDataLocationT = ParallelDataDataLocation>
    void SetLatestUpdateAttemptAuxiliaryDataLocation(LatestUpdateAttemptAuxiliaryDataLocationT&& value) { m_latestUpdateAttemptAuxiliaryDataLocationHasBeenSet = true; m_latestUpdateAttemptAuxiliaryDataLocation = std::forward<LatestUpdateAttemptAuxiliaryDataLocationT>(value); }
    template<typename LatestUpdateAttemptAuxiliaryDataLocationT = ParallelDataDataLocation>
    GetParallelDataResult& WithLatestUpdateAttemptAuxiliaryDataLocation(LatestUpdateAttemptAuxiliaryDataLocationT&& value) { SetLatestUpdateAttemptAuxiliaryDataLocation(std::forward<LatestUpdateAttemptAuxiliaryDataLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetParallelDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ParallelDataProperties m_parallelDataProperties;
    bool m_parallelDataPropertiesHasBeenSet = false;

    ParallelDataDataLocation m_dataLocation;
    bool m_dataLocationHasBeenSet = false;

    ParallelDataDataLocation m_auxiliaryDataLocation;
    bool m_auxiliaryDataLocationHasBeenSet = false;

    ParallelDataDataLocation m_latestUpdateAttemptAuxiliaryDataLocation;
    bool m_latestUpdateAttemptAuxiliaryDataLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
