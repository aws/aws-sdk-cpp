/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about where a code vulnerability is located in your Lambda
   * function. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CodeVulnerabilitiesFilePath">AWS
   * API Reference</a></p>
   */
  class CodeVulnerabilitiesFilePath
  {
  public:
    AWS_SECURITYHUB_API CodeVulnerabilitiesFilePath() = default;
    AWS_SECURITYHUB_API CodeVulnerabilitiesFilePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CodeVulnerabilitiesFilePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The line number of the last line of code in which the vulnerability is
     * located. </p>
     */
    inline int GetEndLine() const { return m_endLine; }
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }
    inline CodeVulnerabilitiesFilePath& WithEndLine(int value) { SetEndLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the file in which the code vulnerability is located. </p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    CodeVulnerabilitiesFilePath& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The file path to the code in which the vulnerability is located. </p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    CodeVulnerabilitiesFilePath& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The line number of the first line of code in which the vulnerability is
     * located. </p>
     */
    inline int GetStartLine() const { return m_startLine; }
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }
    inline CodeVulnerabilitiesFilePath& WithStartLine(int value) { SetStartLine(value); return *this;}
    ///@}
  private:

    int m_endLine{0};
    bool m_endLineHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    int m_startLine{0};
    bool m_startLineHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
