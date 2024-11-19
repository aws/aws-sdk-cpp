/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/TaxRegistrationDocFile.h>
#include <aws/taxsettings/model/SourceS3Location.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>Tax registration document information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxRegistrationDocument">AWS
   * API Reference</a></p>
   */
  class TaxRegistrationDocument
  {
  public:
    AWS_TAXSETTINGS_API TaxRegistrationDocument();
    AWS_TAXSETTINGS_API TaxRegistrationDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxRegistrationDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tax registration document. </p>
     */
    inline const TaxRegistrationDocFile& GetFile() const{ return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(const TaxRegistrationDocFile& value) { m_fileHasBeenSet = true; m_file = value; }
    inline void SetFile(TaxRegistrationDocFile&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }
    inline TaxRegistrationDocument& WithFile(const TaxRegistrationDocFile& value) { SetFile(value); return *this;}
    inline TaxRegistrationDocument& WithFile(TaxRegistrationDocFile&& value) { SetFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline const SourceS3Location& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const SourceS3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(SourceS3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline TaxRegistrationDocument& WithS3Location(const SourceS3Location& value) { SetS3Location(value); return *this;}
    inline TaxRegistrationDocument& WithS3Location(SourceS3Location&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}
  private:

    TaxRegistrationDocFile m_file;
    bool m_fileHasBeenSet = false;

    SourceS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
