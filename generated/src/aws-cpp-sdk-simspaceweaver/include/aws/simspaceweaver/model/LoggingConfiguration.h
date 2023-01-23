/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simspaceweaver/model/LogDestination.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>The logging configuration for a simulation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_SIMSPACEWEAVER_API LoggingConfiguration();
    AWS_SIMSPACEWEAVER_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline const Aws::Vector<LogDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline void SetDestinations(const Aws::Vector<LogDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline void SetDestinations(Aws::Vector<LogDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline LoggingConfiguration& WithDestinations(const Aws::Vector<LogDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline LoggingConfiguration& WithDestinations(Aws::Vector<LogDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline LoggingConfiguration& AddDestinations(const LogDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>A list of the locations where SimSpace Weaver sends simulation log data.</p>
     */
    inline LoggingConfiguration& AddDestinations(LogDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
