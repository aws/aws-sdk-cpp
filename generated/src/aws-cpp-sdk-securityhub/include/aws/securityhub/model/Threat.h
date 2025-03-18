/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/FilePaths.h>
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
   * <p>Provides information about the threat detected in a security finding and the
   * file paths that were affected by the threat. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Threat">AWS
   * API Reference</a></p>
   */
  class Threat
  {
  public:
    AWS_SECURITYHUB_API Threat() = default;
    AWS_SECURITYHUB_API Threat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Threat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the threat. </p> <p>Length Constraints: Minimum of 1 length.
     * Maximum of 128 length.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Threat& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the threat. </p> <p>Length Constraints: Minimum of 1 length.
     * Maximum of 128 length.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    Threat& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This total number of items in which the threat has been detected. </p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline Threat& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the file paths that were affected by the threat.
     * </p> <p>Array Members: Minimum number of 1 item. Maximum number of 5 items.</p>
     */
    inline const Aws::Vector<FilePaths>& GetFilePaths() const { return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    template<typename FilePathsT = Aws::Vector<FilePaths>>
    void SetFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::forward<FilePathsT>(value); }
    template<typename FilePathsT = Aws::Vector<FilePaths>>
    Threat& WithFilePaths(FilePathsT&& value) { SetFilePaths(std::forward<FilePathsT>(value)); return *this;}
    template<typename FilePathsT = FilePaths>
    Threat& AddFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths.emplace_back(std::forward<FilePathsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    Aws::Vector<FilePaths> m_filePaths;
    bool m_filePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
