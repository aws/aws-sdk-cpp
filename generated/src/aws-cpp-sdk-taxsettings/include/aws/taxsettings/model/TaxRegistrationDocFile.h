/**
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
   * <p>The tax registration document. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxRegistrationDocFile">AWS
   * API Reference</a></p>
   */
  class TaxRegistrationDocFile
  {
  public:
    AWS_TAXSETTINGS_API TaxRegistrationDocFile() = default;
    AWS_TAXSETTINGS_API TaxRegistrationDocFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxRegistrationDocFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tax registration document content. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const { return m_fileContent; }
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    void SetFileContent(FileContentT&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::forward<FileContentT>(value); }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    TaxRegistrationDocFile& WithFileContent(FileContentT&& value) { SetFileContent(std::forward<FileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax registration document name. </p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    TaxRegistrationDocFile& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_fileContent{};
    bool m_fileContentHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
