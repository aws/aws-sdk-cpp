/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>The URI for the run log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunLogLocation">AWS
   * API Reference</a></p>
   */
  class RunLogLocation
  {
  public:
    AWS_OMICS_API RunLogLocation() = default;
    AWS_OMICS_API RunLogLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RunLogLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log stream ARN for the engine log.</p>
     */
    inline const Aws::String& GetEngineLogStream() const { return m_engineLogStream; }
    inline bool EngineLogStreamHasBeenSet() const { return m_engineLogStreamHasBeenSet; }
    template<typename EngineLogStreamT = Aws::String>
    void SetEngineLogStream(EngineLogStreamT&& value) { m_engineLogStreamHasBeenSet = true; m_engineLogStream = std::forward<EngineLogStreamT>(value); }
    template<typename EngineLogStreamT = Aws::String>
    RunLogLocation& WithEngineLogStream(EngineLogStreamT&& value) { SetEngineLogStream(std::forward<EngineLogStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream ARN for the run log.</p>
     */
    inline const Aws::String& GetRunLogStream() const { return m_runLogStream; }
    inline bool RunLogStreamHasBeenSet() const { return m_runLogStreamHasBeenSet; }
    template<typename RunLogStreamT = Aws::String>
    void SetRunLogStream(RunLogStreamT&& value) { m_runLogStreamHasBeenSet = true; m_runLogStream = std::forward<RunLogStreamT>(value); }
    template<typename RunLogStreamT = Aws::String>
    RunLogLocation& WithRunLogStream(RunLogStreamT&& value) { SetRunLogStream(std::forward<RunLogStreamT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engineLogStream;
    bool m_engineLogStreamHasBeenSet = false;

    Aws::String m_runLogStream;
    bool m_runLogStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
