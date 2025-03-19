/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The location of the most recent parallel data input file that was
   * successfully imported into Amazon Translate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ParallelDataDataLocation">AWS
   * API Reference</a></p>
   */
  class ParallelDataDataLocation
  {
  public:
    AWS_TRANSLATE_API ParallelDataDataLocation() = default;
    AWS_TRANSLATE_API ParallelDataDataLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API ParallelDataDataLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline const Aws::String& GetRepositoryType() const { return m_repositoryType; }
    inline bool RepositoryTypeHasBeenSet() const { return m_repositoryTypeHasBeenSet; }
    template<typename RepositoryTypeT = Aws::String>
    void SetRepositoryType(RepositoryTypeT&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = std::forward<RepositoryTypeT>(value); }
    template<typename RepositoryTypeT = Aws::String>
    ParallelDataDataLocation& WithRepositoryType(RepositoryTypeT&& value) { SetRepositoryType(std::forward<RepositoryTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30-minute expiration.</p> 
     * <p>Amazon Translate doesn't scan all input files for the risk of CSV injection
     * attacks. </p> <p>CSV injection occurs when a .csv or .tsv file is altered so
     * that a record contains malicious code. The record begins with a special
     * character, such as =, +, -, or @. When the file is opened in a spreadsheet
     * program, the program might interpret the record as a formula and run the code
     * within it.</p> <p>Before you download an input file from Amazon S3, ensure that
     * you recognize the file and trust its creator.</p> 
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ParallelDataDataLocation& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryType;
    bool m_repositoryTypeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
