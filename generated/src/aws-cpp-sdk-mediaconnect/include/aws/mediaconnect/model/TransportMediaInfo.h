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
   * <p> The metadata of the transport stream in the current flow's
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TransportMediaInfo">AWS
   * API Reference</a></p>
   */
  class TransportMediaInfo
  {
  public:
    AWS_MEDIACONNECT_API TransportMediaInfo() = default;
    AWS_MEDIACONNECT_API TransportMediaInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API TransportMediaInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The list of transport stream programs in the current flow's source.</p>
     */
    inline const Aws::Vector<TransportStreamProgram>& GetPrograms() const { return m_programs; }
    inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
    template<typename ProgramsT = Aws::Vector<TransportStreamProgram>>
    void SetPrograms(ProgramsT&& value) { m_programsHasBeenSet = true; m_programs = std::forward<ProgramsT>(value); }
    template<typename ProgramsT = Aws::Vector<TransportStreamProgram>>
    TransportMediaInfo& WithPrograms(ProgramsT&& value) { SetPrograms(std::forward<ProgramsT>(value)); return *this;}
    template<typename ProgramsT = TransportStreamProgram>
    TransportMediaInfo& AddPrograms(ProgramsT&& value) { m_programsHasBeenSet = true; m_programs.emplace_back(std::forward<ProgramsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TransportStreamProgram> m_programs;
    bool m_programsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
