/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/TransportStreamProgram.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The metadata of the transport stream in the current flow's source.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TransportMediaInfo">AWS
   * API Reference</a></p>
   */
  class TransportMediaInfo
  {
  public:
    AWS_MEDIACONNECT_API TransportMediaInfo();
    AWS_MEDIACONNECT_API TransportMediaInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API TransportMediaInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline const Aws::Vector<TransportStreamProgram>& GetPrograms() const{ return m_programs; }

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline void SetPrograms(const Aws::Vector<TransportStreamProgram>& value) { m_programsHasBeenSet = true; m_programs = value; }

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline void SetPrograms(Aws::Vector<TransportStreamProgram>&& value) { m_programsHasBeenSet = true; m_programs = std::move(value); }

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline TransportMediaInfo& WithPrograms(const Aws::Vector<TransportStreamProgram>& value) { SetPrograms(value); return *this;}

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline TransportMediaInfo& WithPrograms(Aws::Vector<TransportStreamProgram>&& value) { SetPrograms(std::move(value)); return *this;}

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline TransportMediaInfo& AddPrograms(const TransportStreamProgram& value) { m_programsHasBeenSet = true; m_programs.push_back(value); return *this; }

    /**
     * The list of transport stream programs in the current flow's source.
     */
    inline TransportMediaInfo& AddPrograms(TransportStreamProgram&& value) { m_programsHasBeenSet = true; m_programs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TransportStreamProgram> m_programs;
    bool m_programsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
