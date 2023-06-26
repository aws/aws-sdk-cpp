/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/BinaryAnalyzerName.h>
#include <aws/migrationhubstrategy/model/RunTimeAnalyzerName.h>
#include <aws/migrationhubstrategy/model/SourceCodeAnalyzerName.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>The combination of the existing analyzers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AnalyzerNameUnion">AWS
   * API Reference</a></p>
   */
  class AnalyzerNameUnion
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzerNameUnion();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzerNameUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzerNameUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The binary analyzer names.</p>
     */
    inline const BinaryAnalyzerName& GetBinaryAnalyzerName() const{ return m_binaryAnalyzerName; }

    /**
     * <p>The binary analyzer names.</p>
     */
    inline bool BinaryAnalyzerNameHasBeenSet() const { return m_binaryAnalyzerNameHasBeenSet; }

    /**
     * <p>The binary analyzer names.</p>
     */
    inline void SetBinaryAnalyzerName(const BinaryAnalyzerName& value) { m_binaryAnalyzerNameHasBeenSet = true; m_binaryAnalyzerName = value; }

    /**
     * <p>The binary analyzer names.</p>
     */
    inline void SetBinaryAnalyzerName(BinaryAnalyzerName&& value) { m_binaryAnalyzerNameHasBeenSet = true; m_binaryAnalyzerName = std::move(value); }

    /**
     * <p>The binary analyzer names.</p>
     */
    inline AnalyzerNameUnion& WithBinaryAnalyzerName(const BinaryAnalyzerName& value) { SetBinaryAnalyzerName(value); return *this;}

    /**
     * <p>The binary analyzer names.</p>
     */
    inline AnalyzerNameUnion& WithBinaryAnalyzerName(BinaryAnalyzerName&& value) { SetBinaryAnalyzerName(std::move(value)); return *this;}


    /**
     * <p>The assessment analyzer names.</p>
     */
    inline const RunTimeAnalyzerName& GetRunTimeAnalyzerName() const{ return m_runTimeAnalyzerName; }

    /**
     * <p>The assessment analyzer names.</p>
     */
    inline bool RunTimeAnalyzerNameHasBeenSet() const { return m_runTimeAnalyzerNameHasBeenSet; }

    /**
     * <p>The assessment analyzer names.</p>
     */
    inline void SetRunTimeAnalyzerName(const RunTimeAnalyzerName& value) { m_runTimeAnalyzerNameHasBeenSet = true; m_runTimeAnalyzerName = value; }

    /**
     * <p>The assessment analyzer names.</p>
     */
    inline void SetRunTimeAnalyzerName(RunTimeAnalyzerName&& value) { m_runTimeAnalyzerNameHasBeenSet = true; m_runTimeAnalyzerName = std::move(value); }

    /**
     * <p>The assessment analyzer names.</p>
     */
    inline AnalyzerNameUnion& WithRunTimeAnalyzerName(const RunTimeAnalyzerName& value) { SetRunTimeAnalyzerName(value); return *this;}

    /**
     * <p>The assessment analyzer names.</p>
     */
    inline AnalyzerNameUnion& WithRunTimeAnalyzerName(RunTimeAnalyzerName&& value) { SetRunTimeAnalyzerName(std::move(value)); return *this;}


    /**
     * <p>The source code analyzer names.</p>
     */
    inline const SourceCodeAnalyzerName& GetSourceCodeAnalyzerName() const{ return m_sourceCodeAnalyzerName; }

    /**
     * <p>The source code analyzer names.</p>
     */
    inline bool SourceCodeAnalyzerNameHasBeenSet() const { return m_sourceCodeAnalyzerNameHasBeenSet; }

    /**
     * <p>The source code analyzer names.</p>
     */
    inline void SetSourceCodeAnalyzerName(const SourceCodeAnalyzerName& value) { m_sourceCodeAnalyzerNameHasBeenSet = true; m_sourceCodeAnalyzerName = value; }

    /**
     * <p>The source code analyzer names.</p>
     */
    inline void SetSourceCodeAnalyzerName(SourceCodeAnalyzerName&& value) { m_sourceCodeAnalyzerNameHasBeenSet = true; m_sourceCodeAnalyzerName = std::move(value); }

    /**
     * <p>The source code analyzer names.</p>
     */
    inline AnalyzerNameUnion& WithSourceCodeAnalyzerName(const SourceCodeAnalyzerName& value) { SetSourceCodeAnalyzerName(value); return *this;}

    /**
     * <p>The source code analyzer names.</p>
     */
    inline AnalyzerNameUnion& WithSourceCodeAnalyzerName(SourceCodeAnalyzerName&& value) { SetSourceCodeAnalyzerName(std::move(value)); return *this;}

  private:

    BinaryAnalyzerName m_binaryAnalyzerName;
    bool m_binaryAnalyzerNameHasBeenSet = false;

    RunTimeAnalyzerName m_runTimeAnalyzerName;
    bool m_runTimeAnalyzerNameHasBeenSet = false;

    SourceCodeAnalyzerName m_sourceCodeAnalyzerName;
    bool m_sourceCodeAnalyzerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
