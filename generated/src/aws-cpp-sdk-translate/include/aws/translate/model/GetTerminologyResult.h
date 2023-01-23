/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TerminologyProperties.h>
#include <aws/translate/model/TerminologyDataLocation.h>
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
  class GetTerminologyResult
  {
  public:
    AWS_TRANSLATE_API GetTerminologyResult();
    AWS_TRANSLATE_API GetTerminologyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API GetTerminologyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline const TerminologyProperties& GetTerminologyProperties() const{ return m_terminologyProperties; }

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline void SetTerminologyProperties(const TerminologyProperties& value) { m_terminologyProperties = value; }

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline void SetTerminologyProperties(TerminologyProperties&& value) { m_terminologyProperties = std::move(value); }

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyResult& WithTerminologyProperties(const TerminologyProperties& value) { SetTerminologyProperties(value); return *this;}

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyResult& WithTerminologyProperties(TerminologyProperties&& value) { SetTerminologyProperties(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of the most recent custom terminology input file that
     * was successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline const TerminologyDataLocation& GetTerminologyDataLocation() const{ return m_terminologyDataLocation; }

    /**
     * <p>The Amazon S3 location of the most recent custom terminology input file that
     * was successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline void SetTerminologyDataLocation(const TerminologyDataLocation& value) { m_terminologyDataLocation = value; }

    /**
     * <p>The Amazon S3 location of the most recent custom terminology input file that
     * was successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline void SetTerminologyDataLocation(TerminologyDataLocation&& value) { m_terminologyDataLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location of the most recent custom terminology input file that
     * was successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline GetTerminologyResult& WithTerminologyDataLocation(const TerminologyDataLocation& value) { SetTerminologyDataLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location of the most recent custom terminology input file that
     * was successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline GetTerminologyResult& WithTerminologyDataLocation(TerminologyDataLocation&& value) { SetTerminologyDataLocation(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline const TerminologyDataLocation& GetAuxiliaryDataLocation() const{ return m_auxiliaryDataLocation; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline void SetAuxiliaryDataLocation(const TerminologyDataLocation& value) { m_auxiliaryDataLocation = value; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline void SetAuxiliaryDataLocation(TerminologyDataLocation&& value) { m_auxiliaryDataLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline GetTerminologyResult& WithAuxiliaryDataLocation(const TerminologyDataLocation& value) { SetAuxiliaryDataLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline GetTerminologyResult& WithAuxiliaryDataLocation(TerminologyDataLocation&& value) { SetAuxiliaryDataLocation(std::move(value)); return *this;}

  private:

    TerminologyProperties m_terminologyProperties;

    TerminologyDataLocation m_terminologyDataLocation;

    TerminologyDataLocation m_auxiliaryDataLocation;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
