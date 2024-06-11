﻿/**
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
    AWS_TRANSLATE_API ParallelDataDataLocation();
    AWS_TRANSLATE_API ParallelDataDataLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API ParallelDataDataLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline const Aws::String& GetRepositoryType() const{ return m_repositoryType; }
    inline bool RepositoryTypeHasBeenSet() const { return m_repositoryTypeHasBeenSet; }
    inline void SetRepositoryType(const Aws::String& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = value; }
    inline void SetRepositoryType(Aws::String&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = std::move(value); }
    inline void SetRepositoryType(const char* value) { m_repositoryTypeHasBeenSet = true; m_repositoryType.assign(value); }
    inline ParallelDataDataLocation& WithRepositoryType(const Aws::String& value) { SetRepositoryType(value); return *this;}
    inline ParallelDataDataLocation& WithRepositoryType(Aws::String&& value) { SetRepositoryType(std::move(value)); return *this;}
    inline ParallelDataDataLocation& WithRepositoryType(const char* value) { SetRepositoryType(value); return *this;}
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
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline ParallelDataDataLocation& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline ParallelDataDataLocation& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline ParallelDataDataLocation& WithLocation(const char* value) { SetLocation(value); return *this;}
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
