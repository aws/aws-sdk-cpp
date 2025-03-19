/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/RootCauseException.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A collection of segments and corresponding subsegments associated to a trace
   * summary error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ErrorRootCauseEntity">AWS
   * API Reference</a></p>
   */
  class ErrorRootCauseEntity
  {
  public:
    AWS_XRAY_API ErrorRootCauseEntity() = default;
    AWS_XRAY_API ErrorRootCauseEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ErrorRootCauseEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ErrorRootCauseEntity& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline const Aws::Vector<RootCauseException>& GetExceptions() const { return m_exceptions; }
    inline bool ExceptionsHasBeenSet() const { return m_exceptionsHasBeenSet; }
    template<typename ExceptionsT = Aws::Vector<RootCauseException>>
    void SetExceptions(ExceptionsT&& value) { m_exceptionsHasBeenSet = true; m_exceptions = std::forward<ExceptionsT>(value); }
    template<typename ExceptionsT = Aws::Vector<RootCauseException>>
    ErrorRootCauseEntity& WithExceptions(ExceptionsT&& value) { SetExceptions(std::forward<ExceptionsT>(value)); return *this;}
    template<typename ExceptionsT = RootCauseException>
    ErrorRootCauseEntity& AddExceptions(ExceptionsT&& value) { m_exceptionsHasBeenSet = true; m_exceptions.emplace_back(std::forward<ExceptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that denotes a remote subsegment.</p>
     */
    inline bool GetRemote() const { return m_remote; }
    inline bool RemoteHasBeenSet() const { return m_remoteHasBeenSet; }
    inline void SetRemote(bool value) { m_remoteHasBeenSet = true; m_remote = value; }
    inline ErrorRootCauseEntity& WithRemote(bool value) { SetRemote(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RootCauseException> m_exceptions;
    bool m_exceptionsHasBeenSet = false;

    bool m_remote{false};
    bool m_remoteHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
