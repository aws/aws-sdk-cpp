﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The exemption certificate. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/ExemptionCertificate">AWS
   * API Reference</a></p>
   */
  class ExemptionCertificate
  {
  public:
    AWS_TAXSETTINGS_API ExemptionCertificate();
    AWS_TAXSETTINGS_API ExemptionCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API ExemptionCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exemption certificate file content. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetDocumentFile() const{ return m_documentFile; }
    inline bool DocumentFileHasBeenSet() const { return m_documentFileHasBeenSet; }
    inline void SetDocumentFile(const Aws::Utils::ByteBuffer& value) { m_documentFileHasBeenSet = true; m_documentFile = value; }
    inline void SetDocumentFile(Aws::Utils::ByteBuffer&& value) { m_documentFileHasBeenSet = true; m_documentFile = std::move(value); }
    inline ExemptionCertificate& WithDocumentFile(const Aws::Utils::ByteBuffer& value) { SetDocumentFile(value); return *this;}
    inline ExemptionCertificate& WithDocumentFile(Aws::Utils::ByteBuffer&& value) { SetDocumentFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exemption certificate file name. </p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }
    inline ExemptionCertificate& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}
    inline ExemptionCertificate& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}
    inline ExemptionCertificate& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_documentFile;
    bool m_documentFileHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
