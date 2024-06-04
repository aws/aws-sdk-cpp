/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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


    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline const SourceS3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline void SetS3Location(const SourceS3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline void SetS3Location(SourceS3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline TaxRegistrationDocument& WithS3Location(const SourceS3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The Amazon S3 location where your tax registration document is stored.</p>
     */
    inline TaxRegistrationDocument& WithS3Location(SourceS3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    SourceS3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
