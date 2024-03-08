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
   * <p> The URI for the run log. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunLogLocation">AWS
   * API Reference</a></p>
   */
  class RunLogLocation
  {
  public:
    AWS_OMICS_API RunLogLocation();
    AWS_OMICS_API RunLogLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RunLogLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline const Aws::String& GetEngineLogStream() const{ return m_engineLogStream; }

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline bool EngineLogStreamHasBeenSet() const { return m_engineLogStreamHasBeenSet; }

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline void SetEngineLogStream(const Aws::String& value) { m_engineLogStreamHasBeenSet = true; m_engineLogStream = value; }

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline void SetEngineLogStream(Aws::String&& value) { m_engineLogStreamHasBeenSet = true; m_engineLogStream = std::move(value); }

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline void SetEngineLogStream(const char* value) { m_engineLogStreamHasBeenSet = true; m_engineLogStream.assign(value); }

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline RunLogLocation& WithEngineLogStream(const Aws::String& value) { SetEngineLogStream(value); return *this;}

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline RunLogLocation& WithEngineLogStream(Aws::String&& value) { SetEngineLogStream(std::move(value)); return *this;}

    /**
     * <p> The log stream ARN for the engine log. </p>
     */
    inline RunLogLocation& WithEngineLogStream(const char* value) { SetEngineLogStream(value); return *this;}


    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline const Aws::String& GetRunLogStream() const{ return m_runLogStream; }

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline bool RunLogStreamHasBeenSet() const { return m_runLogStreamHasBeenSet; }

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline void SetRunLogStream(const Aws::String& value) { m_runLogStreamHasBeenSet = true; m_runLogStream = value; }

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline void SetRunLogStream(Aws::String&& value) { m_runLogStreamHasBeenSet = true; m_runLogStream = std::move(value); }

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline void SetRunLogStream(const char* value) { m_runLogStreamHasBeenSet = true; m_runLogStream.assign(value); }

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline RunLogLocation& WithRunLogStream(const Aws::String& value) { SetRunLogStream(value); return *this;}

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline RunLogLocation& WithRunLogStream(Aws::String&& value) { SetRunLogStream(std::move(value)); return *this;}

    /**
     * <p> The log stream ARN for the run log. </p>
     */
    inline RunLogLocation& WithRunLogStream(const char* value) { SetRunLogStream(value); return *this;}

  private:

    Aws::String m_engineLogStream;
    bool m_engineLogStreamHasBeenSet = false;

    Aws::String m_runLogStream;
    bool m_runLogStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
